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

    node* root = new node(data);

    cout<<"enter to the left of "<<data<<endl;
    root->left = buildtree();
    cout<<"enter to the right of "<<data<<endl;
    root->right = buildtree();
    return root;
}

void inorder(node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    node* root = NULL;
    root = buildtree();
    inorder(root);
}