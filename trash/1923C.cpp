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
	int n, q;
	cin >> n >> q;
	vector<ll> a(n+1,0), p(n+1, 0), n1(n+1, 0);
	for(int i=0; i<n; i++) cin >> a[i+1];
	for(int i=0; i<n; i++) p[i+1]=p[i]+a[i+1];
	for(int i=0; i<n; i++) n1[i+1]=n1[i]+(a[i+1]==1);
	while(q--)
	{
		int l, r; cin>>l>>r;
		if(l!=r && n1[r]-n1[l-1] <= p[r]-p[l-1] - (r-l+1)) YES; else NO;
	}
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

