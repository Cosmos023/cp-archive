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

void solve()
{
	int n;
	cin >> n;
	vector<vi> adj(n+1);
	vector<int> D(n+1, 0);
	for(int i=0; i<n-1; i++)
	{
		int u,v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		D[u]++; D[v]++;
	}
	int ans = 0;
	multiset<int> Z;
	for(int i = 1; i<=n; i++)
	{
		Z.insert(D[i]);
	}
	for(int i=1; i<=n; i++)
	{
		vi ad;
		ad.push_back(i); Z.erase(Z.find(D[i]));
		int mn=INT_MIN, ma=INT_MIN;
		for(int v:adj[i])
		{
			ad.push_back(v);
			ma = max(ma, D[v]-2);
			Z.erase(Z.find(D[v]));
		}
		if(Z.size()!=0) mn = (*Z.rbegin())-1;
		debug(ma, mn);
		ans = max(ans, max(mn,ma)+D[i]);
		for(int v:ad) Z.insert(D[v]);
	}
	cout<<ans<<endl;
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

