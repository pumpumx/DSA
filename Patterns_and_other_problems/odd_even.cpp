#include<iostream>
using namespace std;

int main() {
	int n,a;
	cin>>n;
    a=n&1;
	if(a==0){
		cout<<"Even";
	}
	else{
		cout<<"Odd";
	}
}