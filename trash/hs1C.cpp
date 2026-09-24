#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n,k,q;
	cin >> n >> k >> q;
	vector<int> a(n);
	vector<int> large;
	vector<int> sizes;
	large.push_back(-1);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		if(a[i]>q)
 			large.push_back(i);
 	}
 	large.push_back(n);
 	for(int i = 1; i<large.size();i++)
 	{
 		sizes.push_back(large[i]-large[i-1]-1);
 	}
 	lli ans = 0;
 	// plist(sizes,sizes.size());
 	for(int s:sizes)
 	{
 		if(s>=k)
 		{
 			ans += (1LL*(s-k+1)*(s-k+2)/2);
 		}
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