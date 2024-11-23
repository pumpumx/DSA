#include <iostream> 
#include <vector>
using namespace std;


class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;

    Tree(int d){
        this->data = d;
        this->left=this->right = nullptr;
    }
};

void LeftView(Tree* root , vector<int> &ans , int level){
    if(root==NULL){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    LeftView(root->right , ans , level+1);
    LeftView(root->left , ans , level+1);
}
Tree* Buildtree(){
    int data;
    cin>>data;
    Tree* root  = new Tree(data);
    if(data==-1){
        return NULL;
    }

    cout<<"Enter data at the left side of "<<root->data<<" ";
    root->left = Buildtree();
    cout<<"Enter data at the right side of  "<<root->data<<" ";
    root->right = Buildtree();
    return root;
    
}

int main(){
    vector<int> ans;
    Tree* root = Buildtree();
    int level =0;
    LeftView(root , ans,level);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}