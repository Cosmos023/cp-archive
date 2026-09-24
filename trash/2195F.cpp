#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define all(a) (a).begin(), (a).end()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	vector<lli> a(n+1);
	vector<lli> b(n+1);
	vector<lli> c(n+1);
	int co[n+1][n+1];
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i]>>b[i]>>c[i];
 	}
 	for(int i=1; i<=n; i++)
 	{
	 	for(int j=i; j<=n; j++)
	 	{
	 		if((b[i]-b[j])*(b[i]-b[j])<4*(a[i]-a[j])*(c[i]-c[j]))
	 		{
	 			co[i][j]=1;
	 			co[j][i]=1;
	 		}
	 		else
	 		{
	 			co[i][j]=0;
	 			co[j][i]=0;
	 		}
	 		if(a[i]==a[j])
	 		{
	 			if(b[i]==b[j])
	 			{
	 				if(c[i]==c[j]) 
	 				{
	 					co[i][j]=0;
	 					co[j][i]=0;
	 				}
	 				else 
	 				{
	 					co[i][j]=1;
	 					co[j][i]=1;
	 				}
	 			}
	 			else 
	 			{
	 				co[i][j]=0;
	 				co[j][i]=0;
	 			}
	 		}
	 	}
 	}
 	for(int i=1; i<=n; i++)
 	{
 		for(int j=1; j<=n; j++)
 		{
 			cout<<co[i][j]<<" ";
 		}
 		cout<<"\n";
 	}
 	vl ans(n+1,1);
 	for(int i=1; i<=n; i++)
 	{
 		for(int j = 1; j<=n; j++)
 		{
 			if(j==i) continue;
 			if(co[i][j]==1) 
 			{
 				ans[i]++;
 			}
 		}
 	}
 	plist1(ans,n);
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

