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

	vector<pair<int,int>> vp;
	vector<int> vi;
	vector<int> ki;
 	for(int i=0; i<n; i++)
 	{
 		int k; 
 		cin>>k;
 		int a;
 		int ma=INT_MIN;
 		int mi;
 		for(int j = 0; j<k; j++)
 		{
 			cin>>a;
 			// if(a>ma)
 			// {
 			// 	ma = a;
 			// 	mi = j;
 			// }
 			ma = max(ma,a-j+1);

 		}
 		// vp.push_back({ma, ma+k});
 		vp.push_back({ma,k});
 	}
 	sor(vp);
 	lli sk = 0;
 	for(int i = 0; i<vp.size();i++)
 	{
 		vp[i].first-=(sk);
 		sk+=vp[i].second;
 	}
 	int m = -1;
 	for(auto x:vp)
 		m=max(m,x.first);
 	cout<<m<<"\n";

 	// for(auto p:vp)
 	// {
 	// 	cout<<p.first<<" "<<p.second<<"\n";
 	// }
 	// sor(vp);
 	// vector<pair<int,int>> res;
 	// res.push_back(vp[0]);
 	// int d = 0;
 	// for(int i = 1; i<vp.size();i++)
 	// {
 	// 	if(vp[i].first<=res.back().second)
 	// 		res.back().second = max(res.back().second, vp[i].second);
 	// 	else
 	// 		res.push_back(vp[i]);
 	// }
 	// for(int i = 0; i<res.size()-1;i++)
 	// 	d += res[i].second-res[i].first;
 	// cout<<res.back().first-d<<"\n";
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