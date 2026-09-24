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
 
const ll M = 1e9+7;

void solve()
{
	ll inv2 = modinv(2, M);

	int n;
	cin >> n;
	string s; cin>>s;
	int k = -1;
	vi J(n);
	for(int i=0; i<n; i++)
	{
		J[i]=k;
		if(s[i]=='0') k=i;
	}
	vector<vll> dp(n,vll(2, 0));
	for(int i = 1; i < n; i++)
	{
		dp[i][0] = (1+dp[i-1][s[i-1]=='1'])%M;
		dp[i][1] = ((1+dp[i-1][s[i-1]=='1'])*inv2 + inv2*((J[i]==-1)?(i-J[i]):(dp[J[i]][1]+i-J[i])))%M;
	}
	cout<<dp[n-1][s[n-1]=='1']<<endl;
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

