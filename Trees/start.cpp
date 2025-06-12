#include <iostream>
#include <queue>
#include <stack>
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

Node*BuildUsingRecursion(Node* root){

    cout<<"Enter data"<<endl;
    int data;
    cin>>data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }


    cout<<"Enter data for "<<data<<" left node"<<endl;  
    root->left = BuildUsingRecursion(root->left);

    cout<<"Enter data for "<<data<<"right Node"<<endl;
    root->right = BuildUsingRecursion(root->right);

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

void reverseLevelOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    stack<Node*> s;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            s.push(temp);
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            s.push(temp);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }    
    while(!s.empty()){
        Node* newNode = s.top();
        
        if(newNode == NULL){
            cout<<endl;
        }
        else{
            cout<<newNode->data<<" ";
        }
        s.pop();
   }
};

Node* BuildFromLevelOrder(Node* root){
    cout<<"Enter Data for root node"<<endl;
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    root = new Node(data);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp =  q.front();
        q.pop();

        if(temp->left == NULL){
            cout << "Enter data to the left of"<<temp->data<<endl;
            int leftData;
            cin>>leftData;
            if(leftData != -1){
                temp->left = new Node(leftData);
                q.push(temp->left);
            }
        }
        if(temp->right == NULL){
            cout << "Enter data to the Right of"<<temp->data<<endl;
            int rightData;
            cin>>rightData;
            if(rightData != -1){
                temp->right = new Node(rightData);
                q.push(temp->right);
            }
        }
    }
    return root;
}

void Inorder(Node* root){

    if(root == NULL){
        return;
    }

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main(){

    Node* root = NULL;

    root = BuildFromLevelOrder(root);
    Inorder(root);
}