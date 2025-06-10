#include <iostream> 
using namespace std;

class queue {
    
        int *arr;   
        int size =1000;
        int frontE=0;
        int rear=0;

    public:
        myQueue(){
            arr = new int[size];
        }

        void push(int x){
            if(rear >= size -1){
                return;
            }
            arr[rear++] = x;
        }
        int front(){
            if(frontE == rear || frontE > size - 1){
                return -1;
            }
            int frontElement = arr[front];
            return frontElement
        }
        int pop(){
            if(frontE == rear || frontE > size - 1){
                return -1;
            }
            int frontElement = arr[front++];
            return frontElement
        }
}
int main(){ //Implenenting using array !! 

    queue myQueue = new queue();
}