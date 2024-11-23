#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

class graph{

    public:
        unordered_map<int , list<int>> gra;

        void addedge(int u , int v , bool direction){
            gra[u].push_back(v);

            if(direction==0){
                gra[v].push_back(u);
            }
        }
    void printgraph(){
        for(auto i:gra){
            cout<<i.first<<" ";
            for(auto j: i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter number of Nodes: ";
    cin>>n;
    int m;
    cout<<"Enter number of edges: ";
    cin>>m;

    graph g;

    for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;

            g.addedge(u,v,0);
    }
    g.printgraph();



}