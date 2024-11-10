#include <iostream>

using namespace std;

int getsum(int *arr , int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=i[arr];
    }
    return sum;
}   
int main(){
    //"New" keyword is used to access heap memory

    new char; //Stack memory is static allocation && Heap memory is called dynamic allocation
                //Name can't be provided! Use pointer..
    char* ch = new char;
        cout<<sizeof(ch)<<endl;
    int * i = new int;
    cout<<sizeof(*i); 

    // int* arr = new int[5];

    //Variable size array

    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int ans =  getsum(arr , n);
   cout<<ans;
}