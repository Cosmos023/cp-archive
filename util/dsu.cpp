#include <iostream>
#include <vector>
using namespace std;
vector<int> parent(100005);
vector<int> sz(100005,0);

void make(int n)
{
	parent[n]=n;
	sz[n]=1;
}
int find(int n)
{
	if(parent[n]==n) return n;
	return parent[n] = find(parent[n]);
}

void merge(int a, int b)
{}

void Union(int a, int b)
{
	a = find(a);
	b = find(b);
	if(a!=b)
	{
		if(sz[a]<sz[b])
			swap(a, b);
		parent[b] = a;
		merge(a, b);
		sz[a] += sz[b];
	}
}

int main() {
	int n; cin>>n;
	for(int i = 1; i<=n; i++)
	{
		make(i);
	}
}