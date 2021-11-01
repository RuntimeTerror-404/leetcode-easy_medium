#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    map<int, bool> visited;
    map<int, list<int>> adj;

    void addEdge(int u, int v);

    void dfs(int start);
};

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
};

void Graph::dfs(int start)
{
    visited[start] = true;
    cout << start << " ";
    list<int>::iterator i;
    for (i = adj[start].begin(); i != adj[start].end(); ++i)
    {
        if (!visited[*i])
        {
            dfs(*i);
        }
    }
}

int main()
{
    // Create a graph given in the above diagram
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.dfs(2);

    return 0;
}
