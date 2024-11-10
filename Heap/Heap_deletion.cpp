#include <iostream>
using namespace std;


class heap{
    public:
        int arr[100];
        int size;

        heap(){
            arr[0] = -1;
            size =0;
        }

        void insert(int val){
            size = size+1;
            int index = size;
            int parent = index/2;
            arr[index]=val;
            while(index>1){
                if(arr[parent]<arr[index]){
                    swap(arr[parent] , arr[index]);
                }
                else{
                    return;
                }
            }
        }
        void print(){
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void deletenode(){
            if(size==0){
                cout<<"Nothing to delete";
            }
            arr[1] = arr[size];
            size--;

            int i=1;
            while(i<size){
                int leftindex = 2*i;
                int rightindex = 2*i+1;

                if(leftindex<size && arr[i]<arr[leftindex]){
                    swap(arr[leftindex] , arr[i]);
                }
                else if(rightindex<size && arr[i]<arr[rightindex]){
                    swap(arr[rightindex] , arr[i]);
                }
                else{
                    return;
                }
            }

        }
};

int main(){   //Insertion / Deletion complexity in heap -> O(log(n));
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deletenode();
    h.print();
}