#include <bits/stdc++.h>
using namespace std;

void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for (int i = 0; i < adj[curr].size(); i++)
        {
            if (vis[adj[curr][i]] == false)
            {
                q.push(adj[curr][i]);
                vis[adj[curr][i]] = true;
            }
        }
    }
}

int main()
{
    int N = 6;
    int E = 8;
    vector<int> adj[N];
    bool vis[N] = {false};

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    bfs(0, adj, vis, N);
    cout << endl;
}