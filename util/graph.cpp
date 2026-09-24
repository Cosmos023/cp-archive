#include <bits/stdc++.h>
using namespace std;

vector<int> adj[200005];
bool visited[200005];

void dfs(int vertex)
{
	cout << vertex << endl;
	visited[vertex] = 1;

	for(int child : adj[vertex])
	{
		cout << "parent " << vertex << " child " << child << endl;

		if(visited[child]) continue;
		dfs(child);
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	for(int i = 0; i<m; i++)
	{
		int v, u;
		cin >> v >> u;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}

	dfs(1);
	for(int i = 1; i <= n; i++)
	{
		if(!visited[i]) dfs(i);
	}
}


void bfs(int source)
{
    queue<int> q;

    q.push(source);
    visited[source] = 1;

    while(!q.empty())
    {
        int vertex = q.front();
        q.pop();

        cout << vertex << endl;

        for(int child : adj[vertex])
        {
            cout << "parent " << vertex << " child " << child << endl;

            if(visited[child]) continue;

            visited[child] = 1;
            q.push(child);
        }
    }
}