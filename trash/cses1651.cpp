#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
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

const ll MAXN = 2e5+5;
vll T(4*MAXN);

void build(int v, int st, int en, vll& a)
{
	if(st==en)
	{
		T[v]=a[st]; return;
	}
	int m = (st+en)/2;
	build(2*v, st, m, a);
	build(2*v+1, m+1, en, a);
	T[v] = 0;
}

ll query(int v, int st, int en, int idx)
{
	if(st==en) return T[v];
	int m = (st+en)/2;
	if(idx<=m) return T[v]+query(2*v, st, m, idx);
	else return T[v]+query(2*v+1, m+1, en, idx);
}

void update(int v, int st, int en, int L, int R, ll val)
{
	if(R<st || L>en) return;
	if(L<=st && R>=en) {T[v]+=val; return;}
	int m = (st+en)/2;
	update(2*v, st, m, L, R, val);
	update(2*v+1, m+1, en, L, R, val);
}

void solve()
{
	int n, q;
	cin >> n >> q;
	vll a(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	build(1, 1, n, a);
	while(q--)
	{
		int z; cin>>z;
		if(z==2)
		{
			int k; cin>>k;
			cout<<query(1, 1, n, k)<<endl;
		}
		else
		{
			int l,r,u; cin>>l>>r>>u;
			update(1, 1, n, l, r, u);
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

