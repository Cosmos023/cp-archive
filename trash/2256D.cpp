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

const ll N = 1e6+1;
 
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
 
vector<ll> fact(N),inv_fact(N);
void precompute_factorials(ll mod)
{
    fact[0] = 1;
    for(ll i=1;i<N;i++) fact[i] = fact[i-1] * i % mod;
    inv_fact[N-1] = modinv(fact[N-1],mod);
    for(ll i=N-2;i>=0;i--) inv_fact[i] = inv_fact[i+1] * (i+1) % mod;
}
 
ll ncr(ll n,ll r,ll mod)
{
    if(n<r || r<0) return 1;
    return fact[n] * inv_fact[r] % mod * inv_fact[n-r] % mod;
}


void solve()
{
	int n;
	cin >> n;
	string s; cin>>s;
	int k = 1;
	for(int i = 1; i < n; i++) if(s[i]!=s[i-1]) k++;
	int n0=0, n1=0;
	for(int i = 0; i < n; i++)
	{
		if(s[i]=='0') n0++; else n1++;
	}
	ll ans = 1;
	if(s[0]=='0')
	{
		int z = (k+1)/2;
		ans *= ncr(n0-1, z-1, 998244353);
		ans *= ncr(n1-1, k-z-1, 998244353);
		ans%=998244353;
	}
	else
	{
		int z = (k+1)/2;
		ans *= ncr(n1-1, z-1, 998244353);
		ans *= ncr(n0-1, k-z-1, 998244353);
		ans%=998244353;
	}
	cout<<ans<<endl;
}

int main()
{
	precompute_factorials(998244353);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

