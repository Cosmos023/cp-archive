#include <bits/stdc++.h>
using namespace std;

vector<int> graph[1009];
bool visited[1009];

bool dfs(int vertex, int parent)
{
	visited[vertex] = 1;
	bool loopExists = false;
	for(int child : graph[vertex])
	{
		// cout << "parent " << vertex << " child " << child << endl;
		if(visited[child] && child==parent) continue;
		if(visited[child]) return true;
		loopExists = loopExists || dfs(child, vertex);
	}
	return loopExists;
}

int main()
{
	int v, e;
	cin >> v >> e;
	for(int i = 0; i<e; i++)
	{
		int m, n;
		cin >> m >> n;
		graph[m].push_back(n);
		graph[n].push_back(m);
	}
	for(int i = 1; i<=v; i++)
	{
		if(visited[i])
			continue;
		cout << i << " " << dfs(i,0) << endl;
	}
}