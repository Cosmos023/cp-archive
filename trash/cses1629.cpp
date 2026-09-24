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
	vector<pair<int,pair<int,int>>> vpp;
	for(int i = 0; i<n; i++)
	{
		int a,b;
		cin >> a >> b;
		vpp.push_back({b-a,{a,b}});
	}
	sor(vpp);
	int ans = 0;
	int end = -1;
	for(auto p:vpp)
	{
		if(p.second.first>=end)
		{
			ans++;
			end = p.second.second;
		}
	}
	end = 0;
	int ans1 = 0;
	int i = 0;
	for(auto p:vpp)
	{
		if(i==0)
		{
			i=1;
			continue;
		}
		if(p.second.first>=end)
		{
			ans1++;
			end = p.second.second;
		}
	}
	cout<<max(ans,ans1);
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