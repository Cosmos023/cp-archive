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

bool check(vll& l, vll& r, ll k)
{
	ll L = 0, R=0;
	for(int i = 0; i < l.size(); i++)
	{
		L-=k; R+=k;
		L = max(L, l[i]);
		R = min(R, r[i]);
		if(R<L) return false;
	}
	return true;
}

void solve()
{
	int n;
	cin >> n;
	vector<ll> l(n), r(n);
	for(int i=0; i<n; i++) cin >> l[i] >> r[i];
	ll L = 0, R=1e9;
	ll ans = 1e9;
	while(L<=R)
	{
		ll m = (L+R)/2;
		if(check(l, r, m))
		{
			ans = m;
			R=m-1;
		}
		else L=m+1;
	}
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

