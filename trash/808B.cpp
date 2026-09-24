#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n, k;
	cin >> n >> k;
	int a[n];
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	double sum = 0;
 	double totalsum = 0;
 	for(int i = 0; i<k; i++)
 		sum+=a[i];
 	// cout <<fixed<<setprecision(10)<< sum/k << "\n";
 	totalsum += sum;
 	for(int i = 1; i<n-k+1; i++)
 	{
 		sum-=a[i-1];
 		sum+=a[k+i-1];
 		totalsum += sum;
 		// cout <<fixed<<setprecision(10)<< sum/k << "\n";
 	}
 	cout <<fixed<<setprecision(10)<< totalsum/(n-k+1) << "\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--) 
	{
		solve();
	}
}