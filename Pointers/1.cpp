#include <iostream>

using namespace std;

int* fun(int n){
    int * ptr = &n;
    return ptr;
}
void update(int& n){
    n++;
}
int main(){
    int i=5;
    int n=5;
    int & j = i;
    j++; 
    cout<<i<<" "<<j<<endl;

    cout<<n<<" ";
    update(n);
    cout<<n<<endl;
    fun(n);
}