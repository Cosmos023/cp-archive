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

void solve()
{
	int n, m;
	cin >> n>>m;
	map<int,vector<lli>> r;
	map<int,vector<lli>> c;
 	for(int i=1; i<=n; i++)
 	{
 		for(int j=1; j<=m; j++)
 		{
 			lli cij; cin>>cij;
 			r[cij].push_back(i);
 			c[cij].push_back(j);
 		}
 	}
 	lli ans = 0;
 	for(auto& [cl,v]:r)
 	{
 		sor(v);
 		vll ps(v.size());
 		lli a = 0;
 		ps[0]=v[0];
 		for(int i = 1; i<v.size(); i++)
 		{
 			ps[i]=ps[i-1]+v[i];
 		}
 		for(int i = 0; i<v.size(); i++)
 		{
 			a+=(ps[v.size()-1]-ps[i]-(v.size()-1-i)*v[i]);
 		}
 		ans+=a;
 	}
 	for(auto& [cl,v]:c)
 	{
 		sor(v);
 		vll ps(v.size());
 		lli a = 0;
 		ps[0]=v[0];
 		for(int i = 1; i<v.size(); i++)
 		{
 			ps[i]=ps[i-1]+v[i];
 		}
 		for(int i = 0; i<v.size(); i++)
 		{
 			a+=(ps[v.size()-1]-ps[i]-(v.size()-1-i)*v[i]);
 		}
 		ans+=a;
 	}
 	cout<<ans<<"\n";
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

