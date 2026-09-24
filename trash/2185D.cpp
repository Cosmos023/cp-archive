#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";
 
void solve()
{
	int n,m;
	lli h;
	cin >> n>>m>>h;
	vector<lli> a(n+1);
	vector<lli> x(n+1);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 		x[i] = a[i];
 	}
 	vector<int> b(m);
 	vector<int> c(m);
 	vector<pair<pair<int,int>, int>> p;
 	for(int i=0; i<m; i++)
 	{
 		cin >> b[i];
 		cin >> c[i];
 		p.push_back({{b[i],c[i]},i});
 	}
 	sor(p);
 
 	int k = 0;
 	for(int i=0; i<m; i++)
 	{
 		a[p[i].first.first]+=p[i].first.second;
 		if(a[p[i].first.first]>h)
 		{
 			k = max(k, p[i].second+1);
 			a[p[i].first.first] = x[p[i].first.first];
 		}
 	}
 	for(int i=k; i<m; i++)
 	{
 		x[b[i]]+=c[i];
 	}

 	plist1(x,n);
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