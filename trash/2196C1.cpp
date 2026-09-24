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
	vector<si> adj(n+1);
	int k = 0;
	while(true)
	{
		cout<<"? "<<k+1<<endl; int z; cin>>z; if(z==0) break;
		int u; cin>>u;
		vi Z; for(int i = 1; i<z; i++) {int v; cin>>v; adj[u].insert(v); u=v;}
		k++;
	}
	int m = 0;
	for(int i = 1; i <= n; i++)
	{
		m+=adj[i].size();
	}
	cout<<"! "<<m<<endl;
	for(int i = 1; i <= n; i++)
	{
		for(int c: adj[i]) cout<<i<<" "<<c<<endl;
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

