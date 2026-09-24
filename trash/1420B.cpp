#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
//for(int i=0; i<n; i++)

void solve()
{
	int n;
	cin >> n;
	int a[n];
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		int k = 31;
 		while((a[i]&(1<<k))==0) k--;
 		a[i]=k;
 	}
 	int h[32];
 	for(int i=0; i<32; i++) h[i]=0;
 	for(int i=0; i<n; i++) h[a[i]]++;
 	lli ans = 0;
 	for(int i=0; i<32; i++)
 	{
 		if(h[i]>=2)
 			ans+=(1LL*h[i])*(h[i]-1)/2;
 	}
 	cout << ans << "\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}