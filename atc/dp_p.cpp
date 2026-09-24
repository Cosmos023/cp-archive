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

const ll MAX=2e5+5;
ll T[4*MAX];

void update(int v, int st, int en, int idx, ll val)
{
	if(st==en)
	{
		T[v]=val;
		return;
	}
	int m=(st+en)/2;
	if(idx<=m) update(2*v, st, m, idx, val);
	else update(2*v+1, m+1, en, idx, val);
	T[v] = max(T[2*v], T[2*v+1]);
}

ll query(int v, int st, int en, int L, int R)
{
	if(L>en || R<st) return 0;
	if(L<=st && en<=R) return T[v];
	int m = (st+en)/2;
	return max(query(2*v, st, m, L, R), query(2*v+1, m+1, en, L, R));
}

void solve()
{
	int n; cin>>n;
	vll a(n+1, 0);
	vll h(n+1, 0);
	for(int i = 1; i<=n; i++) cin>>h[i];
	for(int i = 1; i<=n; i++) cin>>a[i];
	vll dp(n+1, 0);
	for(int i = 1; i<=n; i++)
	{
		dp[i] = a[i]+query(1, 1, n, 0, h[i]);
		update(1, 1, n, h[i], dp[i]);
	}
	cout<<*max_element(all(dp))<<endl;
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

