#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void buildll(Node* &head , int data){
    Node* newnode = new Node(data); 
    if(head==NULL){
        head = newnode;
    }
    else{
        Node* temp = head;
        while(temp->next!=NULL){
            
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

Node* reversell(Node*& head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr!=NULL){
        Node* forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    head = prev;
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){

    Node* head = NULL;

    char choice;
    int data;
    do{
        cin>>data;
        buildll(head , data);
        cout<<"To continue inserting Node enter y: ";
        cin>>choice;
    }while(choice=='y'|| choice=='Y');

    print(head);
    print(reversell(head));
}