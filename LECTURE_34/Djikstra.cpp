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

    void djistra(T src){
        map<T,T> parent;
        map<T, int> distance;
        set<pair<int,T>> s;
        // Initialize all distances as INFINITE and parent as NULL
        for (auto it : adj)
        {
            distance[it.first] = INT_MAX;
        }
        distance[src] = 0;
        parent[src] = src;
        s.insert({0, src});
        while(!s.empty())
        {
            auto f = s.begin();

            auto front = *f;
            int parentDistance = front.first;
            T parent1 = front.second;
            s.erase(f);
            for (auto ngh : adj[parent1]){
                int newDistance = parentDistance + ngh.second;
                if (newDistance < distance[ngh.first]){
                    // if ngh already exist in set
                    // modify it or else insert it
                    auto x = s.find({distance[ngh.first], ngh.first});
                    // if present erase it
                    if (x != s.end()){
                        s.erase(x);
                    }
                    // insert it
                    s.insert({newDistance, ngh.first});
                    distance[ngh.first] = newDistance;
                    parent[ngh.first] = parent1;
                }
            }
        }
        for (auto it : distance)
        {
            cout << "distance of " << it.first << " from " << src << " -> " << it.second << endl;
        }
        
    }
    
};

int main(){
    Graph<string> g;
    
    g.addEdge("A", "B", 1, true);
    g.addEdge("A", "C", 4, true);
    g.addEdge("A", "D", 8, true);
    
    g.addEdge("C", "D", 3, true);
    g.addEdge("C", "B", 2, true);
    
    g.print();
    g.djistra("A");
    

    
    return 0;

}