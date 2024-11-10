#include <iostream>
#include <queue>
using namespace std;



class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left=this->right=nullptr;
        }

};


Node* buildtree(Node* root){
    int data;
    cin>>data;
     root = new Node(data);

     if(data==-1){
        return NULL;
     }

     cout<<"Enter data in left of "<<data<<endl;
     root->left = buildtree(root->left);
     cout<<"Enter data in right of "<<data<<endl;
     root->right = buildtree(root->right);
     return root;

}

void levelordertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
       
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
             cout<<temp -> data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        
        if(temp->right){
            q.push(temp->right);
        }
        }
        
    }
    
    
}

int main(){

    Node* root = NULL;

    root = buildtree(root);

    levelordertraversal(root);

}