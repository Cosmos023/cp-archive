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

bool check(vi& a, int x)
{
	map<int,int> M;
	for(int c:a) M[c]++;
	x--;
	int rem = 0;
	M[INT_MAX]=0;
	for(auto it = M.rbegin(); it!=M.rend(); it++)
	{
		// if(rem)
		// {
		// 	it--; rem=0;
		// }
		int k  = (*it).first;
		if(M[k]==0) continue;
		if(M.find(x)!=M.end())
		{
			M[x]--;
			x--;
			if(M[k]>=1) it--;
		}
		else if(x==k || x<=(k-1)/2)
		{
			M[k]--;
			x--;
			if(M[k]>=1) it--;
		}
		if(x==-1) return true;
		debug(M,x);
	}
	return false;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	sor(a);
	int l = 1, r = a[n-1]+1;
	lli ans = 1;
	debug(a);
	while(l<=r)
	{
		int m = (l+r)/2;
		debug(m);
		if(check(a, m))
		{
			ans = m;
			l = m+1;
		}
		else r = m-1;
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

