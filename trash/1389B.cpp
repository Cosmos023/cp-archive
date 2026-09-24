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

void solve()
{
	int n, k, z;
	cin >> n >> k >> z;
	vector<int> a(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	vector<vll> dp0(k+1, vll(z+1, a[1]));
	vector<vll> dp1(k+1, vll(z+1, a[1]));
	ll ans = 0;
	for(int T = 1; T <= k; T++)
	{
		dp0[T][0] = dp0[T-1][0]+a[T+1];
		for(int L = 1; L <= z; L++)
		{
			if(T<2*L) {continue;}
			dp1[T][L] = dp0[T-1][L-1] + a[T-2*L+1];
			dp0[T][L] = max(dp0[T-1][L], dp1[T-1][L]) + a[T-2*L+1];
		}
	}
	ans = max(*max_element(all(dp1[k])), *max_element(all(dp0[k])));
	cout<<ans<<endl;
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

