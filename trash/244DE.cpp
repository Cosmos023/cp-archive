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

void solve()
{
	int n;
	cin >> n;
	string a,b;cin>>a>>b;
	int ca = 1;
	int AA = 1;
	while(ca<n)
	{
		if(a[ca]!=a[ca-1]) AA++;
		ca++;
	}
	int cb = 1;
	int BB = 1;
	while(cb<n)
	{
		if(b[cb]!=b[cb-1]) BB++;
		cb++;
	}
	if(AA>=BB)
	{
		if(AA==BB)
		{
			if(a[0]!=b[0]) NO;
			else YES;
		}
		else
		YES;
	}
	else
		NO;
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

