#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int d){
            this->data = d;
            this->left=this->right=NULL;
        }
};

node* buildtree(){
    int data;
    cin>>data;
    
    if(data==-1){
        return NULL;
    }
    node* temp = new node(data);
    cout<<"enter to left side of "<<data<<endl;
    temp->left = buildtree();
    cout<<"Enter to the right side of "<<data<<endl;
    temp->right = buildtree();
    return temp;

}

void preordertraversal(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
    
}
int main(){
    node* root = NULL;

    root = buildtree();

    preordertraversal(root);
}