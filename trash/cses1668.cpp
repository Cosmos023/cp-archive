#include <bits/stdc++.h>
using namespace std;

vector<int> graph[100009];
bool visited[100009];
vector<int> c(100009, 0);

int color;

int dfs(int vertex)
{
	visited[vertex] = 1;
	for(int child : graph[vertex])
	{
		if(visited[child])
		{
			if(c[child]==c[vertex])
			{
				return 0;
			}
			continue;
		}
		if(c[vertex]==1) c[child]=2; else c[child]=1;
		if(dfs(child)==0) return 0;
	}
	return 1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int v, e;
	cin >> v >> e;
	for(int i = 0; i<e; i++)
	{
		int m, n;
		cin >> m >> n;
		graph[m].push_back(n);
		graph[n].push_back(m);
	}
	color = 2;
	int yes=1;
	for(int i = 1; i<=v; i++)
	{
		if(!visited[i]) 
		{
			if(color==1)color=2;
			else color=1;
			c[i]=color;
			if(dfs(i)==0)
			{
				yes=0; break;
			}
		}
	}
	if(yes)
		for(int i = 1; i<=v;i++) cout<<c[i]<<" ";
	else 
		cout<<"IMPOSSIBLE";
}