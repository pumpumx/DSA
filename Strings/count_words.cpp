#include <iostream>
#include <strings.h>
using namespace std;

int countwords(string& str){
    int count=0;
    bool inword=false;
    
    for(char ch:str){
        if(isspace(ch)){
            inword=false;
        }
        else{
            if(!inword){
                count++;
                inword=true;
            }
        }
    }
    return count;
}
int main(){
    string n;
    getline(cin,n);
 
    cout<<countwords(n);   
}