#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vll = vector<ll>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using ld = long double;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

vector<int> parent(505);
vector<int> sz(505,0);

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
void Union(int a, int b)
{
	a = find(a);
	b = find(b);
	if(a!=b)
	{
		if(sz[a]<sz[b])
			swap(a, b);
		parent[b] = a;
		sz[a] += sz[b];
	}
}

void dfs(int x, vi& Z, vector<vi>& adj)
{
	Z.push_back(x);
	for(int ch: adj[x]) dfs(ch, Z, adj);
}

void solve()
{
	int n;
	cin >> n;
	vector<string> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	vector<vi> adj(n);
	vector<pii> ans;
	for(int i = 0; i < n; i++) make(i);
	for(int i = 0; i < n; i++)
	{
		if(a[i][i]=='0') {NO; return;}
		for(int j = i+1; j < n; j++)
		{
			if(a[i][j]=='1' && a[j][i]=='1') {NO; return;}
			if(a[i][j]=='0' && a[j][i]=='0') {continue;}
			int u = i, v = j; if(a[u][v]=='0') swap(u, v);
			int y = 1;
			for(int z = 0; z < n; z++)
			{
				if(z==u || z==v) continue;
				if(a[u][z]=='1' && a[z][v]=='1') {y=0; break;}
			}
			if(y)
			{
				ans.push_back({u, v});
				adj[u].push_back(v);
				Union(u, v);
			}
		}
	}
	if(ans.size()!=n-1){NO; return;}
	for(int i = 0; i < n-1; i++)
	{
		if(find(i)!=find(i+1)) {NO; return;}
	}
	for(int i = 0; i < n; i++)
	{
		vi Z;
		dfs(i, Z, adj);
		for(int v:Z) if(a[i][v]=='0') {NO; return;}
	}
	YES;
	for(auto [x, y]:ans)
	{
		cout<<x+1<<" "<<y+1<<"\n";
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

