#include <iostream>
#include <vector>

using namespace std;


class node{
    public:
        int data;
        node* next;

        node(int d){
            this->data = d;
            this->next = NULL;
        }
};

void buildll(node* &tail){
    int data;
    cout<<"Enter data: ";
    cin>>data;
    node* temp = new node(data);
    tail->next = temp;
    tail = temp;
    
}
void printll(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node* head = NULL;
    node* tail = head;
    int n;
    cout<<"Enter length of LL: ";
    cin>>n;
    while(n--){
        buildll(tail);
    }

    printll(head);

}