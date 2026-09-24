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
 	for(int i=0; i<n; i++)cin>>a[i];
 	sor(a);
	sum = a[0];
	if(a[0]!=1)
	{
		cout<<1;
		return;
	}
 	for(int i=1; i<n; i++)
 	{
 		// cin >> a[i];
 		// cout<<sum<<"\n";
 		if(sum<a[i]-1)
 		{
 			cout<<sum+1;
 			return;
 		}
 		sum+=a[i];
 	}
 	cout<<sum+1;

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