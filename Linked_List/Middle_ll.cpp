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

int totalnumberofnodes(Node* head){
    int cnt=0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        temp = temp ->next;
    }
    return cnt;
}

Node* getmiddle(Node* head){     //Fast and slow pointer approach
    if(head==NULL || head->next==NULL){
        return head;
    }
    if(head->next->next==NULL){
        return head->next;
    }

    Node* fast = head->next;
    Node* slow = head;

    while(fast!=NULL){
        fast= fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

Node *findMiddle(Node *head) {     //Approach 1 : By traversing the whole  linked list.
    Node* temp = head;
    int num = totalnumberofnodes(head);
    if(num%2!=0){
        num = num/2 ;
        while(num--){
            temp =temp->next;
        }
        return temp;
    }
    else if(num%2==0){
        num= num/2;

        while(num--){
            temp =temp->next;
        }
        return temp;
    }
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
    print(findMiddle(head));
}