#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int d){
            this->data=d;
            this->next=NULL;
            this->prev=NULL;
        }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertathead(Node* &head , int d){
    if(head ==NULL){
        Node* temp = new Node(d);
        head=temp;
    }
    Node* newnode = new Node(d);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insertattail(Node* &tail , int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
    }
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp; 
}
void insertatany(Node* &head ,Node* &tail, int d , int position){
    Node* temp = head;
    if(position==1){
        insertathead(head , d);
        return;
    }

    int cnt=1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}
void length(Node* &head){
    Node* temp = head;  
    int count = 0;
    while(temp!=NULL){
        count++;
        temp= temp->next;
    }
    cout<<count<<" ";
    cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    length(head);
    insertathead(head , 20);
    print(head);
    insertattail(tail , 30);
    print(head);
    insertatany(head , tail , 55 ,4);
    print(head);
}