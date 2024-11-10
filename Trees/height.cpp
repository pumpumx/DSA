#include <iostream>
#include <queue>
using namespace std;



class Node{
    public:
        int data;
        Node* left ;
        Node* right;

        Node(int d){
            this->data = d;
            this->left = this->right = nullptr;
        }
};


void isBalanced(Node* root){

}

int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    return 1 + max(left ,right);
}
void buildfromlevelorder(Node* &root){
    queue<Node*> q;

    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter data for left Node of"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }
         cout<<"Enter data for right Node of"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
    }
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
    buildfromlevelorder(root);
    levelordertraversal(root);
    cout<<height(root);
}