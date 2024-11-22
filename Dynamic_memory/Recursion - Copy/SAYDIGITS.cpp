#include <iostream>

using namespace std;

void saydigit(int n , string arr[]){
    if(n==0){
        return ;
    }

    int digits = n%10;
    n/=10;
    saydigit(n,arr);
    cout<<arr[digits];
    
}

int main(){
    string arr[10] = {"zero","One","Two","Three","Four","Five","Six","Seven","eigth","Nine"};

    int n;
    cin>>n;

    saydigit(n,arr);

}