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
	vector<pair<int,int>> v;
	lli sum = 0;
 	for(int i=0; i<n; i++)
 	{
 		int x;
 		cin >> x;
 		v.push_back({x,i+1});
 		sum += x;
 	}
 	sor(v);
 	vector<int> ans;
 	for(int i = 0; i<n-1; i++)
 	{
 		if(sum-v[i].first==2*v[n-1].first)	
 			ans.push_back(v[i].second);
 	}
 	if(sum-v[n-1].first==2*v[n-2].first)
 		ans.push_back(v[n-1].second);

 	cout << ans.size() << "\n";
 	plist(ans,ans.size());
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