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
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int n, m;
	cin >> n>>m;
	vector<vector<pii>> a(101);
 	for(int i=0; i<n; i++)
 	{
	 	for(int j=0; j<m; j++)
	 	{
	 		int x; cin>>x;
	 		a[x].push_back({i,j});
	 	}
 	}
 	int i = 100;
 	while(a[i].empty()) i--;
 	if(a[i].size()<=2)
 	{
 		cout<<i-1<<"\n"; return;
 	}
 	si r, c;
 	r.insert(a[i][0].first);
 	c.insert(a[i][0].second);
 	vector<pii> p;
 	for(auto& [x,y]:a[i])
 	{
 		if(x!=*r.begin() && y!=*c.begin())
 		{
 			p.push_back({x,*c.begin()});
 			p.push_back({*r.begin(),y});
 			break;
 		}
 	}
 	if(p.empty())
 	{
 		cout<<i-1<<"\n"; return;
 	}
 	pii f;
 	for(auto& [x,y]:a[i])
 	{
 		if(x!=p[0].first && y!=p[0].second)
 		{
 			f = p[1];
 			break;
 		}
 		if(x!=p[1].first && y!=p[1].second)
 		{
 			f = p[0];
 			break;
 		}
 	}
 	for(auto& [x,y]:a[i])
 	{
 		if(x!=f.first && y!=f.second)
 		{
 			cout<<i<<"\n";
 			return;
 		}
 	}
 	cout<<i-1<<"\n";
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

