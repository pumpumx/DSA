#include <iostream>
using namespace std;


class Node{

public:
    int data ;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!= NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free"<<endl;
    }

};

void insertelement(Node* &tail,int element, int data){
    
    //if LL is empty;
    if(tail==NULL){
        Node*temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }
    else{
        Node* current = tail;
        
        while(current->data!=element){
            current = current->next;
        }
        Node* nodeadd = new Node(data);
        nodeadd->next = current->next;
        current->next = nodeadd;
    }
}

void deleteNode(Node* &tail , int value){

    if(tail==NULL){
        cout<<"Please check again";
    }
    else{
        Node* prev = tail;
        Node* current = prev->next;

        while(current->data!=value){
            prev = current;
            current = current->next;

        }
        prev->next = current->next;
        if(tail==current){
            tail = current->next;
        }
        current->next = NULL;
        delete current;
    }

}

void print(Node * &tail){

    Node* temp = tail;

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}


int main(){
    Node* newnode = new Node(20);
    Node* tail = NULL;
    insertelement(tail , 5, 3);
    print(tail);
    insertelement(tail , 3, 7);
    print(tail);
     insertelement(tail , 3, 9);
    print(tail);
    insertelement(tail , 7, 10);
    print(tail);
    // deleteNode(tail , 7);
    // print(tail);
    // deleteNode(tail , 10);
    // print(tail);
    deleteNode(tail , 3);
    print(tail);
}