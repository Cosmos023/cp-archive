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
	int a[n+2];
	a[0] = 0;
	a[n+1]=0;
	lli s = 0;
 	for(int i=1; i<n+1; i++)
 	{
 		cin >> a[i];
 		s += a[i];
 	}
 	
 	lli sum = 0;
 	int l = 1;
 	lli ml = LONG_MIN;
 	lli bl[n+2];
 	bl[0]=0;
 	for(int i = 0; i<=(n-1);i++)
 	{
 		sum+=a[i];
 		if(ml<sum+(i+1)-1LL*(i+1)*(i+1))
 		{
 			ml = sum+(i+1)-1LL*(i+1)*(i+1);
 			l = i+1;
 		}
 		bl[i+1] = ml;
 	}
 	// cout<<l<<" ";
 	// cout<<ml<<" ";

 	sum=0;
 	int r = n;
 	lli mr = LONG_MIN;
 	for(int i = n+1; i>=(2); i--)
 	{
 		sum+=a[i];
 		if(mr<sum+1LL*(i-1)*(i-1)+(i-1)+bl[i-1])
 		{
 			mr = sum+1LL*(i-1)*(i-1)+(i-1)+bl[i-1];
 			r = i-1;
 		}
 	}
 	// cout<<mr<<" ";
 	// cout<<r<<"\n";
 	// cout<<(ml+mr)<<"\n";
 	// sum = 0;
 	// for(int i = 1; i<=n; i++)
 	// {
 	// 	if(i>=l && i<=r)
 	// 	{
 	// 		sum+=(l+r);
 	// 	}
 	// 	else
 	// 		sum+=a[i];
 	// }

 	cout<<mr<<"\n";
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