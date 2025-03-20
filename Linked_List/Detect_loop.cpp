#include <iostream>
#include <map>

using namespace std;


class Node{
    public:
     int data;
     Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }  
    map<Node* , bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
}
int main(){ 
    Node* head = new Node(10);
}