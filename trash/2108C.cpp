#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vll = vector<ll>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using ld = long double;
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
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	vi A; A.push_back(a[0]);
	for(int i=1; i<n; i++)
	{
		if(a[i]!=a[i-1]) A.push_back(a[i]);
	}
	n = A.size();
	vi d(n, 0);
	// vi S = A; sort(rall(S));
	map<int, vi> M;
	for(int i = 0; i < n; i++)
	{
		M[A[i]].push_back(i);
	}
	int ans = 0;
	for(auto it = M.rbegin(); it!=M.rend(); it++)
	{
		for(int c: it->second)
		{
			if(c-1>=0&&d[c-1]) d[c]=1;
			else if(c+1<n&&d[c+1]) d[c]=1;
			else {ans++; d[c]++;}
		}
		debug(d);
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

