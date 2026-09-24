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
	ll n, m;
	cin >> n >> m;
	vector<ll> a(n);
	for(ll i=0; i<n; i++) cin >> a[i];
	sor(a);
	ll ans = 0;
	for(ll z = 1; z<=m; z++)
	{
		ans = max(ans, (upper_bound(all(a), 2*z)-lower_bound(all(a), 2*z))+n-(lower_bound(all(a), z)-a.begin()));
	}
	cout<<ans<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

