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
	ll n;
	cin >> n;
	vector<ll> b(n);
	map<ll, vll> M;
	map<ll, ll> A;
	ll n0 = 0;
	for(ll i=0; i<n; i++)
	{
		cin >> b[i];
		M[b[i]].push_back(i);
		if(b[i]==0) n0++;
	}
	if(n0==0){cout<<"-1\n"; return;}
	vll Z;
	for(auto p:M) Z.push_back(p.first);
	ll nz = Z.size();
	ll prev = -1;
	for(ll i = 1; i < nz; i++)
	{
		ll k = Z[i]-Z[i-1];
		ll noi = M[Z[i-1]].size();
		if(k<=0 || k%noi!=0) {cout<<"-1\n"; return;}
		A[Z[i-1]] = k/noi;
		if(A[Z[i-1]]<prev) {cout<<"-1\n"; return;}
		prev = A[Z[i-1]];
	}
	vll ans(n, -1);
	for(auto& [c, v]:M)
	{
		for(ll idx:v)ans[idx]=A[c];
	}
	ll Mx = *max_element(all(ans));
	ll d = 0;
	for(ll i = 0; i < n; i++)
	{
		if(ans[i]<1) {ans[i]=Mx+1; d++;}
	}
	pL(ans);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

