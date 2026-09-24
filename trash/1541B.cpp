#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+1);
	vector<int> ind(2*n+1,0);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 		ind[a[i]] = i;
 	}
 	lli ans = 0;
 	for(int i = 1; i<=2*n; i++)
 	{
 		if(ind[i]==0) continue;
 		lli k = 2*n/i;
 		for(int j = 1; j<=k; j++)
 		{
 			if(ind[j]==0) continue;
 			if(ind[i]<ind[j])
 				if(i*j==ind[i]+ind[j]) ans++;
 		}
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