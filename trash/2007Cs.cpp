#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ld = long double;
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

void solve()
{
	ll n,a,b;
	cin >> n>>a>>b;
	vector<ll> c(n);
	for(int i=0; i<n; i++)
	{
		cin >> c[i];
	}
	sor(c);
	ll g = gcd(a, b);
	ll k = c.back()+lcm(a,b);
	vll c1(n, 0);
	for(int i = 0; i < n; i++)
	{
		c[i] = c[i]%g;
		// ll x = c[i];
		// ll z = k-(k-x)%gcd(a,b);
		// if(k-z > z+g-k)
		// 	c[i]=z+g;
		// else c[i]=z;
	}
	cout<<*max_element(all(c))-*min_element(all(c))<<endl;
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

	