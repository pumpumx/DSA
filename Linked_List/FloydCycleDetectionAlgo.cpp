#include <iostream>
using namespace std;

                        //Uses Slow and fast pointer approach
class Node{
    public:
        int d;
        Node* next;

        Node(int d){
            this->d=d;
            this->next=NULL;
        }
};

bool FloydAlgo(Node* head){
    if(head==NULL){
        return false; //No loop present
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        if(slow==fast){
            return true;
        }
        slow= slow->next;
        fast=fast->next->next;
    }
    return false;
}
int main(){

}