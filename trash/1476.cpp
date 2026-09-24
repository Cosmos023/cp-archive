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
	vector<int> a(n),c(n),b(n);
	for(int i=0; i<n; i++) cin >> c[i];
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++) cin >> b[i];
	int j,i = 0;
	lli ans = 0;
	while(i<n)
	{
		j = i;
		while(j<n-1 && a[j+1]!=b[j+1]) j++;
		if(j==n-1) break;
		lli m = 0;
		for(int k = i; k<=j+1; k++)
		{
			if(k==0){m+=;continue;}
			m+=2+c[k-1]-abs(a[k]-b[k]);
		}
		m+=abs(c[j])-2;
		ans = max(ans, m);
		debug(i,j);
		i=j+1;
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

