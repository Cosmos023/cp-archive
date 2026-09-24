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

const ll MAXN = 1e5+5;
vll T(4*MAXN);

void build(int v, int st, int en, vi& a, int z)
{
	if(st==en)
	{
		T[v] = a[st]; return;
	}
	int m = (st+en)/2;
	build(2*v, st, m, a, 1-z);
	build(2*v+1, m+1, en, a, 1-z);
	if(z) T[v] = T[2*v] ^ T[2*v+1];
	else T[v] = T[2*v] | T[2*v+1];
}

void update(int v, int st, int en, int idx, int b, int z)
{
	if(st==en)
	{
		T[v]=b; return;
	}
	int m = (st+en)/2;
	if(idx<=m)
		update(2*v, st, m, idx, b, 1-z);
	else update(2*v+1, m+1, en, idx, b, 1-z);
	if(z) T[v] = T[2*v] ^ T[2*v+1];
	else T[v] = T[2*v] | T[2*v+1];
}

void solve()
{
	int n,m;
	cin >> n >> m;
	vector<int> a((1<<n)+1);
	for(int i=0; i<(1<<n); i++) cin >> a[i+1];
	build(1, 1, 1<<n, a, (n%2)?0:1);
	while(m--)
	{
		int p, b; cin>>p>>b;
		update(1, 1, 1<<n, p, b, (n%2)?0:1);
		cout<<T[1]<<endl;
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

