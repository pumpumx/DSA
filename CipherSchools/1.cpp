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