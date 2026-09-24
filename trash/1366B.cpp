#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n,x,m;
	cin >> n>>x>>m;
	vector<pair<int,int>> vp;
 	for(int i=0; i<m; i++)
 	{
 		int l, r;
 		cin >> l>>r;
 		vp.push_back({l,r});
 	}

 	int lb=-1,ub=-1;
 	for(auto p:vp)
 	{
 		int l = p.first, r = p.second;
 		if(lb==-1&&l<=x&&x<=r)
 		{
 			lb = l; ub = r;
 		}
 		if(ub<l) continue;
 		if(ub>=l&&ub<r)ub=r;
 		if(lb<=r&&lb>l)lb=l;
 	}
 	cout<<ub-lb+1<<"\n";
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