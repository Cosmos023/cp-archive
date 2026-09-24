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
	ll n, k, m;
	cin >> n >> k >> m;
	vector<ll> a(n);
	if(m==1 && k>1) {NO; return;}
	if(m==1)
	{
		YES;
		for(int i = 0; i < n; i++)
		{
			a[i]=1;
		}
		pL(a);
		return;
	}
	if(k>m){NO; return;}
	YES;
	a[0]=m+k-1;
	for(int i = 1; i < n; i++)
	{
		a[i]=m-1;
	}
	pL(a);
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

