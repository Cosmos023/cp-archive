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


lli fuck(vll& that, lli X)
{
	lli r = X; int l = 0;
	lli ans = r;
	lli M = LLONG_MAX;
	while(l<=r)
	{
		lli m = (l+r)/2;
		lli K = 0;
		K+=X-m; K+=max(0LL, m-that[0]);
		lli mx = max(m, that[0]);
		for(int i = 1; i<that.size(); i++)
		{
			K+=max(0LL, mx-that[i]);
			mx = max(mx, that[i]);
		}
		if(K<M) {ans = m; M=K; l=m+1;} else r=m-1;
	}
	return ans;
}

void solve()
{
	lli n;
	cin >> n;
	vector<lli> a(n);
	for(lli i=0; i<n; i++) cin >> a[i];
	lli ans = 0;
	lli M = a[0];
	map<lli, lli> mp;
	map<lli, vll> mew;
	for(lli i=1; i<n; i++)
	{
		mp[M] += max(0LL, M-a[i]);
		if(M>a[i])
			mew[M].push_back(a[i]);
		M = max(M, a[i]);
	}
	debug(mew[2], mew[100]);
	lli cc = -1;
	for(auto& [k, v]:mp)
	{
		if(mp[cc]<v) cc=k;
	}
	vll& that = mew[cc]; lli Z = that.size();
 debug(that);
	if(Z!=0)
	{
		for(lli i=1; i<n; i++) 
		{
			if(a[i-1]==cc) 
			{
				if(i==1)
					{a[i-1]=that[0]; break;}
				else
				{
					// sor(that);
					// lli X = 
					// lli med = 0; if(Z%2) med = that[(Z-1)/2]; else med = (that[(Z-1)/2]+that[Z/2])/2;
					a[i-1] = fuck(that, a[i-2]);
				}
			}
			debug(cc, a);
		}
	}
	M = a[0];
	for(lli i=1; i<n; i++)
	{
		ans += max(0LL, M-a[i]);
		M = max(M, a[i]);
	}
	cout<<ans<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	lli t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

