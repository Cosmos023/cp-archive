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
	ll n,m; cin>>n>>m;
	vector<vector<ll>> d(n+1, vector<ll>(m+1, -1));
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{

		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t=1; while(t--) { solve(); }
}