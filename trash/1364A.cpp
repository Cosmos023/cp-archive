#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n, x;
	cin >> n >> x;
	vector<int> a(n+1, 0);
 	for(int i=1; i<=n; i++)
 	{
 		int c;
 		cin >> c;
 		a[i] = a[i-1]+c;
 	}
 	int l = -1;
 	for(int i = 0; i<=n; i++)
 	{
 		for(int j = i; j<=n; j++)
 		{
 			if((a[j]-a[i])%x)
 			{
 				l = max(l, j-i);
 			}
 		}
 	}
 	cout<<l<<"\n";
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