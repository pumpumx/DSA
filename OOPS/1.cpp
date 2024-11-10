#include <iostream>
using namespace std;

class student{
public:
    string name;
    int age;
};


int main(){
    student student1;
    student1.name = "Naaz Manhas";
    student1.age = 13;
    cout<<student1.name<<" "<<student1.age;
}