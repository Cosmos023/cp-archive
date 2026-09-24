#include <bits/stdc++.h>
using namespace std;

using ld = long double;
using ll = long long;
// const ll mod = 1e9+7;

const long long MOD = 998244353;
long long modpow(long long a, long long b) {
    long long res = 1; a %= MOD;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
long long modinv(long long q) { return modpow(q, MOD - 2); }


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n+1, 0);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i+1];
	}
	vector<ld> E(n+1, 0);
	E[n] = (1.0l*a[n]+1)/2;
	for(int i = n-1; i >= 1; i--)
	{
		if(a[i]<E[i+1]) E[i]=E[i+1];
		else
		{
			ll k = ceil(E[i+1]); cerr<<k<<endl;
			E[i] = (a[i]*(a[i]+1)/2-k*(k-1)/2)*1.0l/a[i] + 1.0l*(k-1)*E[i+1]/a[i];
		}
	}
	for(int i = 1; i <= n; i++)
	{
	 cerr<<E[i]<<" ";
	}
	cerr<<endl;
	cout<<fixed<<setprecision(15)<<E[1]<<endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t=1; while(t--) { solve(); }
}