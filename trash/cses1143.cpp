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

const ll MAXN = 2e5;
vi T(4*MAXN);

void build(int v, int st, int en, vi& a)
{
	if(st==en)
	{
		T[v]=a[st]; return;
	}
	int m = (st+en)/2;
	build(2*v, st, m, a); build(2*v+1, m+1, en, a);
	T[v] = max(T[2*v], T[2*v+1]);
}

void update(int v, int st, int en, int x, int val)
{
	if(st==en)
	{
		T[v]=val; return;
	}
	int m = (st+en)/2;
	if(x<=m) update(2*v, st, m, x, val);
	else update(2*v+1, m+1, en, x, val);
	T[v] = max(T[2*v], T[2*v+1]);
}

pair<int, int> find(int v, int st, int en, int val)
{
	if(T[v]<val) return {0, 0};
	if(st==en) return {st, T[v]};
	int m = (st+en)/2;
	if(T[2*v]>=val) return find(2*v, st, m, val);
	if(T[2*v+1]>=val) return find(2*v+1, m+1, en, val);
	return {0, 0};
}

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	build(1, 1, n, a);
	// pL1(T, 20);
	while(m--)
	{
		int r; cin>>r;
		pii x = find(1, 1, n, r);
		cout<<x.first<<" ";
		if(x.first==0) continue;
		update(1, 1, n, x.first, x.second-r);
		// pL1(T, 20);
		debug(x, x.second-r);
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

