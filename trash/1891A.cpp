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

bool check(vi& a, int l, int r)
{
	for(int i = l; i < min(r, (int)a.size()-1); i++)
	{
		if(a[i]>a[i+1]) return false;
	}
	return true;
}

void solve()
{
	int n;
	cin >> n;
	vi a(n+1);
	for(int i=1; i<=n; i++) cin >> a[i];	
	if(check(a, 17, n) && check(a, 9, 16) && check(a, 5, 8) && check(a, 3, 4) && check(a, 2, 2)) YES; else NO;
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

