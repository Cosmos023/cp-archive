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

void solve()
{
	int n;
	cin >> n;
	vector<lli> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	ll s = 0;
	for(int i=0; i<n-1; i++)
	{
		if(a[i]>i+1)
		{
			s += a[i]-i-1;
		}
		else if(a[i]<i+1)
		{
			int k = i+1-a[i];
			if(s<k)
			{
				NO; return;
			}
			s-=k;
		}
	}
	if(s+a[n-1]>=n) YES; else NO;
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

