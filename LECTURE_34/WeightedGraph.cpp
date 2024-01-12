#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
public:
    map<T, list<pair<T,int>>>adj;



    void addEdge(T u, T v, int dist, bool bidir = false){
        adj[u].push_back({v,dist});
        if (bidir)
        {
            adj[v].push_back({u, dist});
        }
    }
    void print()
    {
        for (auto p:adj)
        {
            cout << p.first << " : ";
            for (auto v:p.second){
                cout <<"(" <<v.first << ", " << v.second << ")"<<", ";
            }
            cout << endl;
        }
    }
    
};

int main(){
    Graph<string> g;
    
    g.addEdge("A", "B", 1, true);
    g.addEdge("A", "C", 3, true);
    g.addEdge("A", "D", 2, true);
    
    g.addEdge("C", "D", 4, true);
    g.addEdge("D", "B", 5, true);
    
    g.print();
    

    
    return 0;

}