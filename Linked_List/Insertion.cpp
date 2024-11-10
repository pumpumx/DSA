#include <iostream>

using namespace std;


class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
void insertatmiddle(Node* &head , int position , int data){
    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    Node* nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    
}
void insertathead(Node* &head , int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertattail(Node* &tail,int data){
    Node * temp = new Node(data);
    tail->next = temp;
    temp->next = NULL;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* newnode = new Node(10);
    cout<<endl;
    cout<<newnode->data<<newnode->next;
    cout<<endl;
    Node* head = newnode;
    Node* tail = newnode;
    cout<<endl;
    insertathead(head, 20);
    insertathead(head , 44);
    insertattail(tail,55);
    print(head);
    insertatmiddle(head,3,99);
    print(head);
}