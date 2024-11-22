#include <iostream>
using namespace std;


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