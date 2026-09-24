#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n,x,y;
	cin >> n>>x>>y;
	int a[n];
	int xr[n];
	int yr[n];
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		xr[i] = a[i]%x; yr[i] = a[i]%y;
 	}

 	map<int, vector<int>> miv;
 	for(int i=0; i<n; i++)
 	{
 		miv[yr[i]].push_back(i);
 	}

 	lli ans = 0;

 	map<int,int> f;
 	for(auto p:miv)
 	{
 		f.clear();
 		for(auto i:p.second)
 		{
 			f[xr[i]]++;
 		}
 		ans += 1LL*f[0]*(f[0]-1)/2;
 		f[0]=0;
 		for(auto i:f)
 		{
 			if(i.first>(x/2)) break;
 			if(i.second!=0)
 			{
 				ans += 1LL*i.second*f[x-i.first];
 			}
 		}
 		if(x%2==0)
 		{
 			ans -= 1LL*f[x/2]*(f[x/2]+1)/2;
 		}
 	}
 	cout << ans << "\n";
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