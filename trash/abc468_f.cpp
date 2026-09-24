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
	int n;
	cin >> n;
	vector<int> a(n), z(n, 0);
	for(int i=0; i<n; i++) cin >> a[i];
	int m = a[n-1];
	for(int i=n-1; i>=0; i--)
	{
		if(a[i]>m) z[i]=1;
		m=min(m, a[i]);
	}
	int x = 0, y=0;
	int c = 0;
	for(int i = 0; i < n; i++)
	{
		if(y<x) swap(x, y);
		if(y<a[i])
		{
			c++; y=a[i];
		}
		else if(x<a[i])
		{
			if(!z[i])
			{
				c++; x=a[i];
			}
		}
	}
	debug(z);
	cout<<c<<endl;
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

