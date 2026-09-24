#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void search(set<pair<int,int>>& sp, vi& d, int u, int v, map<pair<int,int>,int>& dn)
{
	if(d[u] && d[v]) return;
	if(sp.find({u,v})!=sp.end()) return;
	int z;
	// if(dn.count({u,v})==1)
	// 	z=dn[{u,v}];
	// else
	{
		cout<<"? "<<u<<" "<<v<<endl;
		cin>>z;	
		// dn[{u,v}]=z;
	}
	if(z==u)
	{
		sp.insert({u, v});
		d[u]=1;
		d[v]=1;
		return;
	}
	if(z>u)
		search(sp, d, u, z,dn);
	else
		search(sp, d, z, u,dn);
	if(z>v)
		search(sp, d, v, z,dn);
	else
		search(sp, d, z, v,dn);
}


void solve()
{
	int n;
	cin >> n;
	map<pair<int,int>,int> dn;
	set<pair<int,int>> sp;
	vi d(n+1, 0);
	d[1]=1;
	for(int i = 2; i<=n; i++)
	{
		if(!(d[i]))
		{
			search(sp, d, 1, i,dn);
		}
	}
	cout<<"! ";
	for(auto& p:sp)
	{
		cout<<p.first<<" "<<p.second<<" ";
	}
	cout<<endl;
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

