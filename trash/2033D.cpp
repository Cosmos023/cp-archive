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
	ll n;
	cin >> n;
	vector<ll> a(n+1, 0);
	vll p(n+1, 0);
	for(ll i=0; i<n; i++) cin >> a[i+1];
	for(ll i=0; i<n; i++) p[i+1]=p[i]+a[i+1];
	vll dp(n+1, 0);
	vll L(n+1, -1);
	map<ll,ll> M; M[0]=0;
	for(ll i=1; i<=n; i++)
	{
		if(M.find(p[i])!=M.end()) L[i]=M[p[i]];
		M[p[i]]=i;
	}
	dp[0]=1;
	for(ll i = 1; i <= n; i++)
	{
		dp[i] = dp[i-1];
		if(L[i]!=-1) dp[i]=max(dp[i], 1+dp[L[i]]);
	}
	cout<<dp[n]-1<<endl;
	debug(dp,p,L);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

