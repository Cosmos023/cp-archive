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
	lli sum = 0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		sum += a[i];
 	}

 	for(int i=0; i<n; i++)
 	{
 		if(sum==a[i]*(n))
 		{
 			cout<<"YES\n";
 			return;
 		}
 	}
 	cout<<"NO\n";
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