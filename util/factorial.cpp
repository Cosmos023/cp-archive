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
