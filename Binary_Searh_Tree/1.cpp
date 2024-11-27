#include <iostream>
#include <queue>
using namespace std;
                    // Node of left subtree will be smaller than root
                    //Node of right subtree will be larger than root
                    //Inorder of BST is SORTED!!!


class Tree{
    public:
        int data;
        Tree* left;
        Tree* right;
        Tree(int d){
            this->data = d;
            this->left = this->right = nullptr;
        }
};

Tree* insertIntoBst(Tree* root , int d){
    if(root==NULL){
        root = new Tree(d);
        return root;
    }

    if(d>root->data){
        root->right = insertIntoBst(root->right , d);
    }
    else if(d<root->data){
        root->left = insertIntoBst(root->left,d); 
    }
    return root;
}
void takeinput(Tree*& root){
    int d;
    cin>>d;
    
    while(d!=-1){
        root = insertIntoBst(root , d);
        cin>>d;
    }
    
}       
void levelordertraversal(Tree* root){
    queue<Tree*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Tree* temp = q.front();
       
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
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
    Tree* node = NULL;
    cout<<"Enter data to enter in BST";
    takeinput(node);
    cout<<"Printing BST ";
    cout<<endl;
    levelordertraversal(node);
}