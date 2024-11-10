#include <iostream>
#include <strings.h>
using namespace std;


int countcharacter(string str , char ch){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==ch){
            count++;
        }
    }    
    return count;
}

string conactenate(string & str1 , string& str2){
    return str1 + str2;
}

int main(){               
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    cout<<str1.length()<<endl;
    char ch;
    cin>>ch;
    cout<<countcharacter(str1,ch)<<endl;
    cout<<conactenate(str1,str2);
}