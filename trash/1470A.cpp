#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n,m;
	cin >> n>>m;
	int k[n+1];
	int c[m+1];
	int c1[m+1];
 	for(int i=1; i<=n; i++)
 	{
 		cin >> k[i];
 	}
 	for(int i=1; i<=m; i++)
 	{
 		cin >> c[i];
 		c1[i] = c[i];
 	}
 	sort(k+1,k+n+1);
 	lli ans = 0;
 	int p = 1;
 	for(int i = n;i>=1;i--)
 	{
 		// cout<<i<<" "<<k[i]<<" "<<c[p] <<" "<<c1[k[i]]<<" ";
 		if(p<=m&&c[p]<c1[k[i]])
 		{
 			ans+=c[p];
 			c[p]=INT_MAX;
 			p++;
 		}
 		else
 		{
 			ans+=c1[k[i]];
 		}
 		// cout<<ans<<"\n";
 	}
 	cout<<ans<<"\n";
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