#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(d)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(d)[i]<<" ";cout<<"\n";
//for(int i=0; i<n; i++)

void solve()
{
	int n, m;
	cin >> n>>m;
	int a[n];
	int r[m];
 	for(int i=0; i<m; i++) r[i]=0;
 	for(int i=0; i<n; i++) 
 	{
 		cin >> a[i];
 		r[a[i]%m]++;
 	}
 	if(n==1)
 	{
 		cout << "1\n";
 		return;
 	}
 	int ans = 0;
 	int k = (m+1)/2;
 	if(m%2==0)
 	{
 		if(r[m/2]!=0)
 			ans++;
 	}
 	if(r[0]!=0) ans++;
 	for(int i = 1; i<k; i++)
 	{
 		if(r[i]==r[m-i]&&(r[i]!=0))
 			ans++;
 		else
 		{
 			ans += abs(r[i]-r[m-i]);
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