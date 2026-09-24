#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define vi vector<int>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+1);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	if(n%2==0)
 	{
 		for(int i=1; i<=n/2; i++)
 		{
 			cout<<-a[n-i+1]<<" ";
 		}
 		for(int i=n/2+1; i<=n; i++)
 		{
 			cout<<a[n-i+1]<<" ";
 		}
 		cout<<"\n";
 		return;
 	}
 	for(int i=1; i<=n/2-1; i++)
	{
		cout<<-a[n-i+1]<<" ";
	}
	cout<<2*a[n/2+1]*a[n/2+2]<<" ";
	cout<<-a[n/2+2]*a[n/2]<<" ";
	cout<<-a[n/2]*a[n/2+1]<<" ";
 	for(int i=n/2+3; i<=n; i++)
	{
		cout<<a[n-i+1]<<" ";
	}
	cout<<"\n";
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