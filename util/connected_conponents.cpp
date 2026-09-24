#include <bits/stdc++.h>
using namespace std;

vector<int> graph[1009];
bool visited[1009];

int dfs(int vertex)
{
	// cout << vertex << endl;
	visited[vertex] = 1;
	int size = 1; 

	for(int child : graph[vertex])
	{
		// cout << "parent " << vertex << " child " << child << endl;

		if(visited[child]) continue;
		size += dfs(child);
	}
	return size;
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
	int components = 0;
    vector<int> comp_sizes;

	for(int i = 1; i<=v; i++)
	{
		if(visited[i])
			continue;
		components++;
		int sz = dfs(i);
        comp_sizes.push_back(sz);

	}

	sort(comp_sizes.begin(),comp_sizes.end());	
	cout << "components " << components << endl;
    cout << "sizes: ";
    for (int x : comp_sizes) cout << x << " ";
    cout << endl;
	// cout << "components " << components << endl;
}