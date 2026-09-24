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

const ll N = 300005;
 
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
    if(n<r || r<0) return 0;
    return fact[n] * inv_fact[r] % mod * inv_fact[n-r] % mod;
}

const lli mod = 1e9+7;

void solve()
{
	int n;
	cin >> n;
	vector<int> a;
	int c = 0;
	map<int, int> M;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		if(x==-1) 
			c++; 
		else a.push_back(x);
		M[x]++;
	}
	n=n-c;
	debug(M);
	lli ans = 1;
	lli ans2 = 1;
	int k = 0;
	int P=0;
	for(auto& [v, C]: M)
	{
		k++;
		ans *= (mpow(2, C-1, mod)); ans%=mod; //debug(v, C, ans);
		if(M.find(v+1)!=M.end()) P++;
	}
	// ans = (ans-mpow(2, k, mod)+1+mod)%mod;
	// int d = M[1];
	// lli A = 0;
	// for(int i = 1; i<=min(c, d); i++)
	// {
	// 	A += ncr(c, i, mod)*ncr(d, i, mod); 
	// 	A%=mod;
	// 	debug(A, c,d, ans2);
	// }
	ans2 = (P*ans)%mod;
	if(c==0) ans2 = 0;
	cout<<(ans + ans2)%mod<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	precompute_factorials(mod);
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

