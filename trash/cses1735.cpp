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
vll lazy(4*MAXN);
vll stt(4*MAXN);

void build(int v, int st, int en, vll& a)
{
	lazy[v]=0;
	stt[v]=0;
	if(st==en)
	{
		T[v]=a[st]; return;
	}
	int m = (st+en)/2;
	build(2*v, st, m, a);
	build(2*v+1, m+1, en, a);
	T[v] = T[2*v]+T[2*v+1];
}

void push(int v, int st, int en)
{
	if(st!=en)
	{
		if(stt[v]==1)
		{
			int m = (st+en)/2;
			push(2*v, st, m);
			push(2*v+1, m+1, en);
			lazy[2*v] += lazy[v];
			lazy[2*v+1] += lazy[v];
			T[2*v] += lazy[v]*(m-st+1);
			T[2*v+1] += lazy[v]*(en-m);
		}
		else if(stt[v]==2)
		{
			int m = (st+en)/2;
			push(2*v, st, m);
			push(2*v+1, m+1, en);
			lazy[2*v] = lazy[v];
			lazy[2*v+1] = lazy[v];
			T[2*v] = lazy[v]*(m-st+1);
			T[2*v+1] = lazy[v]*(en-m);
		}
	}
	lazy[v]=0;
	stt[v]=0;
}

void update(int v, int st, int en, int L, int R, ll val, int STATE)
{
	if(R<st || L>en) return;
	push(v, st, en);
	if(L<=st && en<=R)
	{
		if(STATE==1)
		{
			T[v] += (en-st+1)*val;
			stt[v] = 1;
		}
		else if(STATE==2)
		{
			T[v] = (en-st+1)*val;
			stt[v] = 2;
		}
		if(st!=en)
		{
			if(STATE==1) lazy[v] += val;
			else lazy[v] = val;
		}
		return;
	}
	int m = (st+en)/2;
	update(2*v, st, m, L, R, val, STATE);
	update(2*v+1, m+1, en, L, R, val, STATE);
	T[v] = T[2*v]+T[2*v+1];
}

ll query(int v, int st, int en, int L, int R)
{
	if(R<st || L>en) return 0;
	push(v, st, en);
	if(L<=st && en<=R) return T[v];
	int m = (st+en)/2;
	return query(2*v, st, m, L, R) + query(2*v+1, m+1, en, L, R);
}

void solve()
{
	int n, q;
	cin >> n >> q;
	vll a(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	debug(a);
	build(1, 1, n, a);
	// pL1(T, 100);
	while(q--)
	{
		int z; cin>>z;
		if(z==3)
		{
			int l, r; cin>>l>>r;
			cout<<query(1, 1, n, l, r)<<endl;
		}
		else
		{
			int l,r,x; cin>>l>>r>>x;
			update(1, 1, n, l, r, x, z);
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

