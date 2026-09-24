#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vll = vector<ll>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";


const ll N = 300005;
 
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
    if(n<r || r<0) return 0;
    return fact[n] * inv_fact[r] % mod * inv_fact[n-r] % mod;
}
 

void solve()
{
	string a; cin>>a;
	ll ans = 0;
	int i = 0;
	int j = 0;
	while(i<a.size())
	{
		j=0;
		while(i+j+1<a.size() && a[i+j]!=a[i+j+1]) j++;
		ans += (j+1 + ncr(j+1, 2, 998244353))%998244353;
		ans %= 998244353;
		i += j+1;
	}
	cout<<ans<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	precompute_factorials(998244353);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

