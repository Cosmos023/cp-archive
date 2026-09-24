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

const lli mod = 998244353;

void solve()
{
	int n, m;
	cin >> n >> m;
	using zll = pair<lli, pair<lli,lli>>;
	vector<vector<zll>> M(m+1);
	vll dp(m+1,0);
	dp[0]=1;
	for(int i=0; i<n; i++)
	{
		lli l,r,p,q; cin>>l>>r>>p>>q;
		M[r].push_back({l,{p,q}});
		dp[0]*=((q-p)*modinv(q, mod))%mod;
		dp[0]%=mod;
	}
	for(int i = 1; i<=m; i++)
	{
		for(zll& Z:M[i])
		{
			lli p = Z.second.first;
			lli q = Z.second.second;
			dp[i] += (((dp[Z.first-1]*p)%mod)*modinv(q-p,mod))%mod;
			dp[i]%=mod;
		}
	}
	debug(dp);
	cout<<dp[m]<<endl;
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

