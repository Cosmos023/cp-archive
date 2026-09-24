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
	vector<int> a(n);
	vector<int> d(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	d[0] = abs(a[0]-a[1]);
 	d[n-1] = abs(a[n-1]-a[n-2]);
 	// for(int i=1; i<n-1; i++)
 	for(int i=1; i<n-1; i++)
 	{
 		d[i] = abs(a[i]-a[i-1])+abs(a[i]-a[i+1]);
 	}
 	int M = 0;
 	lli sum = 0;
 	for(int i=1; i<n-1; i++)
 	{
 		sum += abs(a[i]-a[i-1]);
 		M = max(M, d[i]-abs(a[i-1]-a[i+1]));
 	}
 	sum+=abs(a[n-1]-a[n-2]);
 	M = max(d[0],M);
 	M = max(d[n-1],M);
 	cout<<sum-M<<"\n";
 	// plist(d, n);
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