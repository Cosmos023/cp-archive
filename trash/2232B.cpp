#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int n;
	cin >> n;
	vector<lli> a(n+1);
	vector<lli> ans(n+1,0);
 	for(int i=1; i<=n; i++) cin >> a[i];

 	ans[1]=a[1];
 	lli extra = 0;
 	for(int i=2; i<=n; i++)
 	{
 		if(a[i]>=ans[i-1])
 		{
 			ans[i]=ans[i-1];
 			extra += a[i]-ans[i-1];
 		}
 		else if(a[i]+extra>=ans[i-1])
 		{
 		debug(i, extra);
 			ans[i]=ans[i-1];
 			extra -= ans[i-1]-a[i];
 		}
 		else
 		{
 			lli x = (ans[i-1]-a[i]-extra+i-1)/i;
 			ans[i]=ans[i-1]-x;
 			extra = x*(i-1) - (ans[i]-a[i]-extra);
 		}
 	}
 	pL1(ans, n);
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

