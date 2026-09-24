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

const ll MAXN = 5e5+5;
vll T(4*MAXN);

void update(ll v, ll st, ll en, ll x, ll val)
{
	if(st==en)
	{
		T[v]=val;
		return;
	}
	ll m = (st+en)/2;
	if(x<=m) update(2*v, st, m, x, val);
	else update(2*v+1, m+1, en, x, val);
	T[v]=gcd(T[2*v], T[2*v+1]);
}

ll query(ll v, ll st, ll en, ll L, ll R, ll x)
{
	if(R<st || en<L) return 0;
	if(L<=st && en<=R) if(T[v]%x==0) return 0;
	if(st==en)
	{
		return T[v]%x!=0;
	}
	ll m = (st+en)/2;
	ll q1 = query(2*v, st, m, L, R, x);
	if(q1>1) return q1;
	ll q2 = query(2*v+1, m+1, en, L, R, x);
	return q1+q2;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	for(int i=0; i<n; i++) update(1, 1, n, i+1, a[i+1]);
	int q; cin>>q;
	debug(q);
	while(q--)
	{
		int z; cin>>z;
		if(z==1)
		{
			ll l,r,x; cin>>l>>r>>x;
			debug(query(1, 1, n, l, r, x));
			if(query(1, 1, n, l, r, x)<=1) YES; else NO;
		}
		else
		{
			ll x, y; cin>>x>>y;
			update(1, 1, n, x, y);
		}
	}
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

