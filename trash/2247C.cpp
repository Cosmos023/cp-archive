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
	vector<int> a(n), b(n);
	int a0,a1,b0,b1; a0=a1=b0=b1=0;
	for(int i=0; i<n; i++) 
	{
		cin >> a[i];
		if(a[i]==0) a0++; else a1++;
	}
	for(int i=0; i<n; i++)
	{
		cin >> b[i];
		if(b[i]==0) b0++; else b1++;
	}
	int c = 0, c1=0, c0=0;
	for(int i = 0; i < n; i++)
	{
		if(a[i]!=b[i]) 
		{
			c++;
			if(a[i]==1) c1++;
			if(a[i]==0) c0++;
		}
	}
	if(c==0)
	{
		cout<<"0\n"; return;
	}
	if(c1%2)
	{
		cout<<"1\n"; return;
	}
	if(c1>=2 || (a0-c0>=1 && a1-c1>=1))
	{
		cout<<"2\n"; return;
	}
	cout<<"-1\n";
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

