#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(d)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(d)[i]<<" ";cout<<"\n";
//for(int i=0; i<n; i++)

void solve()
{
	int n, k;
	cin >> n >> k;
	int a[n+1];
	map<int,int> mp;
 	int sz = 0;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 		if(mp[a[i]]==0)
 		{
 			mp[a[i]]=i;
 		}
 		else if(i-mp[a[i]]>=k)
		{
			mp[a[i]]=i;
		}
 	}
 	vector<pair<int,int>> vp;
 	int l = 0;
 	for(auto p:mp)
 	{
 		// cout<<p.first<<" "<<p.second<<"\n";
 		if(p.second!=0)
 		{
 		l++;
 			vp.push_back({p.second,p.first});
 		}
 	}
 	sor(vp);
 	l = min(l,min(n,k));
 	cout<<l<<"\n";
 	for(int i = 0; i<l; i++)
 	{
 		cout << vp[vp.size()-i-1].second << " ";
 	}
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	{
		solve();
	}
}