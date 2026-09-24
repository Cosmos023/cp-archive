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

using E = pair<ll, pair<ll, ll>>; // weight, u, v;

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

void solve()
{
	int n, m;
	cin >> n >> m;
	set<E> S;
	for(int i=0; i<n; i++) make(i+1);
	for(int i=0; i<m; i++)
	{
		int u, v, w; cin>>u>>v>>w;
		S.insert({w, {u,v}});
	}
	vector<E> included;
	for(E e:S)
	{
		ll w = e.first;
		auto [u, v] = e.second;
		if(find(u)==find(v)) continue;
		included.push_back(e);
		Union(u, v);
	}
	si heads;
	for(int i=0; i<n; i++) heads.insert(find(i+1));
	if(heads.size()!=1){cout<<"IMPOSSIBLE\n"; return;}
	ll ans = 0;
	for(E e:included)
	{
		ans+=e.first;
	}
	cout<<ans<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--)
	{
		solve();
	}
}

