#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
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

bool check(vi& a, vi& b, int m, int n)
{
	int idx = 1;
	int i = 1;
	while(idx<=m)
	{
		if(m-a[i]<=idx && b[i]+1>=idx)
		{
			// if(m==6){debug(m, n, idx, i, m-a[i]);}
			idx++;
		}
		i++;
		if(i>n) break;
	}
	return idx==m+1;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+1),b(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1] >> b[i+1];
	// for(int i=0; i<n; i++) cin >> b[i+1];
	int ans = 0;
	int l = 1, r = n;
	while(l<=r)
	{
		int m = (l+r)/2;
		if(check(a,b,m,n))
		{
			ans = m;
			l=m+1;
		}
		else
			r=m-1;
	}
	cout<<ans<<endl;
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

