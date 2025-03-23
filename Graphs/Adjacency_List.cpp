#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=1;i<m;i++){
        int u,v;
        cin>>u>>v; //If graph is directed, ex-> from u to v
                    // then only v value will be stored in adj[u]
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}