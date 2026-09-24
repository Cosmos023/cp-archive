#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ll = long long int;
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

ll mpow(ll a,ll b,ll mod)
{
    if(mod==1) return 0;
    ll res=1; a%=mod;
    while(b)
    {
        if(b&1) res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
 
ll modinv(ll a,ll mod) { return mpow(a,mod-2,mod); }

const int mod = 1e9+7;

int dfs(int x, int p, vi& st, vector<vi>& adj)
{
	int sz = 0;
	for(int ch:adj[x])
	{
		if(ch==p) continue;
		sz+=dfs(ch, x, st, adj);
	}
	return st[x] = sz+1;
}

void solve()
{
	int n, k; cin>>n>>k;
	vector<vi> adj(n+1);
	for(int i = 0; i < n-1; i++)
	{
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	if(k==1 || k==3)
	{
		cout<<"1\n"; return;
	}
	vi st(n+1, 0);
	dfs(1, 0, st, adj); debug(st);
	lli ans = 0;
	for(int i = 0; i < n; i++)
	{
		ans += (1LL*(st[i+1])*(n-st[i+1]))%mod; ans%=mod;
	}
	ans+=1ll*n*(n-1)/2; ans%=mod;
	ans = ans*modinv(1LL*n*(n-1)/2 ,mod); ans%=mod;
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

