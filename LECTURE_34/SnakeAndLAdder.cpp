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
    int distance(T src, T des)
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
        int d = des;
        int s = src;
        while (d!=s){
            cout << d << " <-- ";
            d = parent[d];
        }
        cout << src << endl;
        return distance[des];
        
        // cout << endl;
        // cout << "PATH from " << src << " to " << des << " is -> ";
        // while (des != src)
        // {
        //     cout << des << " ";
        //     des = parent[des];
        // }
        // cout << src << endl;
        
    }
};

int main(){
    Graph<int> g;
    int board[50] = {0};
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[17] = -13;
    board[18] = 11;
    board[20] = -14;
    board[24] = -8;
    board[25] = 10;
    board[32] = -2;
    board[34] = -22;
    for (int i=0; i<=36; i++)
    {
        for (int dice=1; dice<=6; dice++)
        {
            int u = i;
            int v = u + dice + board[u+dice];
            g.addEdge(u,v,false);
        }
    }
    // g.print();
    cout << g.distance(0,36);
    
    // g.addEdge("Putin","Trump", false);
    // g.addEdge("Putin","Modi", false);
    // g.addEdge("Putin","Pope", false);
    // g.addEdge("Trump","Modi", true);
    // g.addEdge("Prabhu","Modi", false);
    // g.addEdge("Yogi","Modi", true);
    // g.addEdge("Yogi","Prabhu", false);
    // g.print();
    // string src = "Putin";
    // g.BFS(src);
    // g.path(src, "Yogi");
    // g.distance(src);
    
    return 0;

}