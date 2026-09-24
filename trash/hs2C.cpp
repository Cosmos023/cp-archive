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
	vector<int> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	sor(a);
 	int l = 0, r = n-1;
 	int s = n;
 	int M = INT_MIN;
 	for(int i = n-1; i>=0; i--)
 	{
 		auto k = lower_bound(a.begin(), next(a.begin(),i), a[i]-5);
 		M = max(M, (int)(next(a.begin(),i)-k+1));
 	}
 	// while(s>0)
 	// {
 	// 	for(int i = 0; i<n-s+1; i++)
 	// 	{
 	// 		if(a[i+s-1]-a[i]<=5)
 	// 		{
 	// 			M = max(M, s); 
 	// 		}
 	// 	}
 	// 	s--;
 	// }
 	cout<<M<<"\n";
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