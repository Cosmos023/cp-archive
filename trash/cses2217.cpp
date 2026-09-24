#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n, m;
	cin >> n>>m;
	vector<int> a(n+1);
	map<int,int> mp;
 	for(int i=1; i<=n; i++)
 	{
 		cin>>a[i];
 		mp[a[i]] = i;
 	}
 	int ans = 1;
 	for(int i = 2; i<=n; i++)
 	{
 		if(mp[i]<mp[i-1]) ans++;
 	}
	cout<<ans; 	
	for(int i = 0; i<m; i++)
	{
		int p, q;
		cin>>p>>q;
		if(p>q)
			swap(p, q);
		if(p>1)
		{
			if(mp[a[p]]>mp[a[p]+1] && q)
		}
	}
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