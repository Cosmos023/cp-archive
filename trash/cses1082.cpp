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
const int mod = 1e9+7;

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

ll sum(ll x)
{
	x%=mod;
	return ((x*(x+1))%mod * modinv(2, mod))%mod;
}

void solve()
{ 
	ll n;
	cin >> n;
	ll ans = 0;
	ll i;
	for(i=1; i*i<=n; i++)
	{
		ans += (i%mod * ((sum(n/i) - sum(n/(i+1)) + mod)%mod)) % mod;
		if(i!=n/i )
		{
			ll j = n/i;
			ans += (j%mod * ((sum(n/j) - sum(n/(j+1)) + mod)%mod)) % mod;
		}
		ans %= mod;
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

