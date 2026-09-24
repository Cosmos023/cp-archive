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
	vector<int> a(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	int i = n-1, j=n;
	int M = INT_MAX;
	if(n<=3)
	{
		cout<<"0\n"; return;
	}
	sort(a.begin()+1, a.end());
	while(true)
	{
		if(i>1)
		{
			int m1 = max(a[i]-a[1], max(a[n]-a[j], a[j-1]-a[i+1]));
			i--;
			int m2 = max(a[i]-a[1], max(a[n]-a[j], a[j-1]-a[i+1]));
			i++;
			if(m2<=m1) {i--; continue;}
		}
		if(j>i+1)
		{

			int m1 = max(a[i]-a[1], max(a[n]-a[j], a[j-1]-a[i+1]));
			j--;
			int m2 = max(a[i]-a[1], max(a[n]-a[j], a[j-1]-a[i+1]));
			j++;
			if(m2<=m1) {j--; continue;}
		}
		break;
		debug(M);
	}
	// while()
	debug(i, j);
	cout<<(max(a[i]-a[1], max(a[n]-a[j], a[j-1]-a[i+1]))+1)/2<<endl;
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

