#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
 
void solve()
{
	int n;
	cin >> n;
	int a[n+2], c[n+2];
	int v[n+2];
 	for(int i=0; i<=n+1; i++)v[i]=0;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	if(n==1)
 	{
 		cout<<"0\n";
 		return;
 	}
 	a[0] = INT_MIN;
 	a[n+1] = INT_MAX;
 	for(int i=0; i<=n+1; i++) c[i] = a[i];
 	int ans = 0;
 	int i = 2;
 	while(i<=n)
 	{
 		lli d1 = 1LL*a[i]-a[i-1];
 		lli d2 = 1LL*a[i+1]-a[i];
 		if(d1==d2)
 		{
 			if(v[i-1])
 				ans+=1;
 			else
 				ans+=2;
 			i+=2;
 			continue;
 		}
 		if(d1<d2)
 		{
 			ans+=1;
 			a[i]+=d1;
 			v[i]=1;
 			i++;
 			continue;
 		}
 		if(d2<d1)
 		{
 			ans+=1;
 			i+=2;
 			continue;
 		}
 	}
 	for(int i=0; i<=n+1; i++) a[i] = c[i];
 	for(int i=0; i<=n+1; i++)v[i]=0;
 	int ans2 = 0;
 	i = 1;
 	while(i<=n)
 	{
 		lli d1 = 1LL*a[i]-a[i-1];
 		lli d2 = 1LL*a[i+1]-a[i];
 		if(d1==d2)
 		{
 			if(v[i-1])
 				ans2+=1;
 			else
 			{
 				// cout<<"h1\n";
 				ans2+=2;
 			}
 			i+=2;
 			continue;
 		}
 		if(d1<d2)
 		{
 			// cout<<"h2\n";
 			ans2+=1;
 			a[i]+=d1;
 			v[i]=1;
 			i++;
 			continue;
 		}
 		if(d2<d1)
 		{
 			// cout<<"h3\n";
 			ans2+=1;
 			i+=2;
 			continue;
 		}
 	}
	// cout<<ans<<" "<<ans2<<"\n";
 	cout<<max(ans,ans2)<<"\n";
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