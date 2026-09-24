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

lli binpow_mod(lli x, lli n, lli m){
    if(m==1) return 0;
    if (n == 0) return 1;
    x%=m;
    lli res = binpow_mod(x, n / 2, m);
    if (n % 2)
        return ( (res * res)%m * x ) % m;
    return (res * res) % m;
}

 
ll modinv(ll a,ll mod) { return binpow_mod(a,mod-2,mod); }

const lli mod = 998244353;

void solve()
{
	lli n;
	cin >> n;
	vector<vll> a(n);
	map<lli, lli> M;
	for(int i=0; i<n; i++)
	{
		int k; cin>>k;
		for(int j = 0; j < k; j++)
		{
			int x; cin>>x;
			a[i].push_back(x); M[x]++;
		}
	}
	lli ans = 0;
	for(int i=0; i<n; i++)
	{
		for(int j = 0; j < a[i].size(); j++)
		{
			ans += (modinv(n*n, mod) * ((modinv(a[i].size(), mod) * M[a[i][j]])%mod))%mod;
			ans%=mod;
		}
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

