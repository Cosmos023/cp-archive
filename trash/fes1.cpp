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
	ll D = modinv(2);
	ll n; cin>>n;
	vector<ll> a(n, 0);
	iota(a.begin(), a.end(), 1LL);
	for(int i = 0; i < n-1; i++)
	{
		a[i+1]=(a[i+1]-(a[i]*D)%MOD)%MOD;
		a[i] = (a[i]-(a[i]*D)%MOD)%MOD;
		a[i]+=MOD; a[i]%=MOD;
		a[i+1]+=MOD; a[i+1]%=MOD;
	}
	cout<<(a[n-1]*D)%MOD<<endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>>t; while(t--) { solve(); }
}