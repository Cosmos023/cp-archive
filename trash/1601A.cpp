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
	int a[30];
 	for(int i=0; i<30; i++) a[i]=0;
 	for(int i=0; i<n; i++)
 	{
 		lli x;
 		cin >> x;
 		for(int i = 0; i<30;i++)
 		{
 			if(x&(1<<i))
 				a[i]++;
 		}
 	}
 	int g = 0;
 	for(int i = 0; i<30;i++)
 	{
 		if(a[i])
 		{
 			g = a[i];
 		}
 	}
 	if(g==0)
 	{
 		for(int i = 1; i<=n; i++)
 			cout<<i<<" ";
 		cout<<"\n";
 		return;
 	}
 	for(int i = 0; i<30; i++)
 		if(a[i])
 			g = gcd(g,a[i]);
 	for(int i = 1; i<=g/2; i++)
 	{
 		if(g%i==0)
 			cout<<i<<" ";
 	}
 	cout<<g<<"\n";
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