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
	lli n,k;
	cin >> n >> k; lli c = n;
	if(n <  1 + (int)ceil(log2(k)))
	{
		cout<<"-1\n"; return;
	}
	int z = 1;
	vi ans(n+1, -1);
	int l = 1, r = n;
	for(int i = n-2; i>=0; i--)
	{
		if(i>=(int)ceil(log2(k)))
		{
			ans[l]=z;
			l++;
		}
		else
		{
			ans[r]=z; r--;  k-=(1LL<<i);
		}		
		z++;
	}
	ans[l]=c;
	pL1(ans, c);
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

