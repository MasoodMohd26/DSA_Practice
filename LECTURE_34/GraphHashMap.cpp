#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
public:
    unordered_map<T, list<T>>adj;


    void addEdge(T u, T v, bool bidir = false){
        adj[u].push_back(v);
        if (bidir)
        {
            adj[v].push_back(u);
        }
    }
    void print()
    {
        for (auto p:adj)
        {
            cout << p.first << " : ";
            for (auto v:p.second){
                cout << v<<", ";
            }
            cout << endl;
        }
    }
    void BFS(T src)
    {
        queue<T>q;
        unordered_map<T, bool>visited;
        unordered_map<T,T>parent;
        unordered_map<T,int>distance;
        visited[src] = true;
        parent[src] = src;
        distance[src] = 0;
        q.push(src);
        while (!q.empty())
        {
            T node = q.front();
            cout << node << " ";
            q.pop();
            for (auto ngh:adj[node])
            {
                if (!visited[ngh])
                {
                    visited[ngh] = true;
                    parent[ngh] = node;
                    distance[ngh] = distance[node] + 1;
                    q.push(ngh);
                }
            }
        }
        
    }
    void path(T src, T des)
    {
        queue<T>q;
        unordered_map<T, bool>visited;
        unordered_map<T,T>parent;
        unordered_map<T,int>distance;
        visited[src] = true;
        parent[src] = src;
        distance[src] = 0;
        q.push(src);
        while (!q.empty())
        {
            T node = q.front();
            cout << node << " ";
            q.pop();
            for (auto ngh:adj[node])
            {
                if (!visited[ngh])
                {
                    visited[ngh] = true;
                    parent[ngh] = node;
                    distance[ngh] = distance[node] + 1;
                    q.push(ngh);
                }
            }
        }
        cout << endl;
        cout << "PATH from " << src << " to " << des << " is -> ";
        while (des != src)
        {
            cout << des << " ";
            des = parent[des];
        }
        cout << src << endl;
        
    }
    void distance(T src)
    {
        queue<T>q;
        unordered_map<T, bool>visited;
        unordered_map<T,T>parent;
        unordered_map<T,int>distance;
        visited[src] = true;
        parent[src] = src;
        distance[src] = 0;
        q.push(src);
        while (!q.empty())
        {
            T node = q.front();
            // cout << node << " ";
            q.pop();
            for (auto ngh:adj[node])
            {
                if (!visited[ngh])
                {
                    visited[ngh] = true;
                    parent[ngh] = node;
                    distance[ngh] = distance[node] + 1;
                    q.push(ngh);
                }
            }
        }
        for (auto p:distance)
        {
            cout << "Distance of " << p.first << " from " << src <<" is " << p.second << endl;
        }
        // cout << endl;
        // cout << "PATH from " << src << " to " << des << " is -> ";
        // while (des != src)
        // {
        //     cout << des << " ";
        //     des = parent[des];
        // }
        // cout << src << endl;
        
    }
    void DFSHelper(T src, unordered_map<T,bool>&visited){
        cout << src << " ";
        visited[src] = true;
        for (auto it : adj[src])
        {
            if (!visited[it]){
                DFSHelper(it, visited);
            }
        }
        return;
    }
    void DFS(T src)
    {
        unordered_map<T, bool> visited;
        DFSHelper(src,visited);
        int components = 1;

        for (auto p:adj)
        {
            if (!visited[p.first]){
                DFSHelper(p.first,visited);
                components++;
            }
        }
        cout << endl;
        cout << "Tota number of components : " << components << endl;
    }
};

int main(){
    Graph<string> g;
    g.addEdge("Putin","Trump", false);
    g.addEdge("Putin","Modi", false);
    g.addEdge("Putin","Pope", false);
    g.addEdge("Trump","Modi", true);
    g.addEdge("Prabhu","Modi", false);
    g.addEdge("Yogi","Modi", true);
    g.addEdge("Yogi","Prabhu", false);
    
    
    g.print();
    string src = "Putin";
    g.BFS(src);
    g.path(src, "Yogi");
    g.distance(src);
    cout<<endl;
    // unordered_map<string,bool>visited;
    cout<<"DFS Traversal ===> ";
    // cout << src << endl;
    g.DFS(src);

    
    return 0;

}