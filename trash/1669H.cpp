#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n, k;
	cin >> n>>k;
	int a[n];
	int bits[31];
 	for(int i=0; i<31; i++) bits[i]=0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		for(int j=0; j<=30; j++)
 		{
 			if(a[i]&(1<<j))
 				bits[j]++;
 		}
 	}
 	// plist(bits,31);	
 	for(int i = 30; i>=0; i--)
 	{
 		if((n-bits[i])<=k)
 		{
 			k -= (n-bits[i]);
 			bits[i]=n;
 		}
 	}
 	int ans = 0;
 	for(int i=0; i<31; i++)
 	{
 		if(bits[i]==n)
 			ans = ans|(1<<i);
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