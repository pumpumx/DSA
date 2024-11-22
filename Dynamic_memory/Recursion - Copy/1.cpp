//Function calling itself called recursion.

//When big problem depends upon same type small problem , then we'll use recursion.

//question 1 - factorial using recursion.

#include <iostream>
using namespace std;

int factorial(int n){
   if(n==0){
    return 1;
   }
   int choti = factorial(n-1);
   int badi = n*choti;

   return badi;

}



int main(){
    int n;
    cin>>n;
    int temp = n;
    cout<<factorial(n);
}

/* Sum using recursion

int sum1(int *arr,int n,int sum){
    sum+=arr[0];
    if(n==0){
        return sum;
    }
    sum1(arr+1,n-1,sum);

}
int main(){
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sum1(arr,n,sum);
}
*/