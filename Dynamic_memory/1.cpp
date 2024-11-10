#include <iostream>
using namespace std;


class hero{
        public:
        string name;
        int health=1;
        private:
        int age=24;

        public:
        int getage(){   //getter method because age is private.
            return age;
        }
    };

int main(){
    //statically 
    hero h1;
    cout<<"health is "<<h1.health<<endl;
    cout<<"age is "<<h1.getage()<<endl;
    //dynamically 
    hero * h = new hero;
    cout<<sizeof(h)<<endl;
    cout<<"health is "<<(*h).health<<endl;
    cout<<"age is "<<(*h).getage()<<endl;
    //alternative 
    cout<<"health is "<<h->health<<endl;
    cout<<"age is "<<h->getage()<<endl;
    

}
