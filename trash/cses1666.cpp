#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100009];
bool visited[100009];

void dfs(int vertex)
{
	visited[vertex] = 1;

	for(int child : adj[vertex])
	{
		if(visited[child]) continue;
		dfs(child);
	}
}

int main()
{
	int v, e;
	cin >> v >> e;
	for(int i = 0; i<e; i++)
	{
		int m, n;
		cin >> m >> n;
		adj[m].push_back(n);
		adj[n].push_back(m);
	}

	vector<int> an;
	for(int i = 1; i<=v; i++)
	{
		if(!visited[i]) 
		{
			dfs(i);
			an.push_back(i);
		}
	}
	cout<<an.size()-1<<"\n";
	for(int i = 1; i<an.size();i++) cout<<an[i-1]<<" "<<an[i]<<"\n";
}