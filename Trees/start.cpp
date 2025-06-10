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
            this->left = nullptr;
            this->right = nullptr;
        }
};

Node*BuildFromLevelOrder(Node* root){

    cout<<"Enter data"<<endl;
    int data;
    cin>>data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }


    cout<<"Enter data for "<<data<<" left node"<<endl;
    root->left = BuildFromLevelOrder(root->left);

    cout<<"Enter data for "<<data<<"right Node"<<endl;
    root->right = BuildFromLevelOrder(root->right);

    return root;

};

void levelOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }  
} ;

int main(){

    Node* root = NULL;

    root = BuildFromLevelOrder(root);

    levelOrderTraversal(root);
}