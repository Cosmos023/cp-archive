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
	int n;
	cin >> n;
	map<int,int> mp;
	for(int i = 0; i<n; i++)
	{
		int x; cin>>x;
		mp[x]++;
	}
	lli ans = (*mp.begin()).second;
	pair<int,int> x=*mp.begin();
	for(auto& p:mp)
	{
		if(p==*mp.begin())
		{
		 continue;
		}

		if(p.first>x.first+1)
		{
			ans+=p.second;
		}
		else if(x.second<p.second)
		{
			ans+=(p.second-x.second);
		}
		x=p;
	}
	// vector<lli> a(n);
	// multiset<lli> a;
 	// for(int i=0; i<n; i++)
 	// {
 	// 	int x; cin >> x;
 	// 	a.insert(x);
 	// }
 	// lli ans = 0;
 	// while(!a.empty())
 	// {
 	// 	ans++;
 	// 	lli x = *a.begin();
 	// 	int i = 0;
 	// 	while(true)
 	// 	{
 	// 		auto k = a.find(x+i);
 	// 		if(k==a.end()) break;
 	// 		a.erase(k);
 	// 		i++;
 	// 	}
 	// }
 	cout<<ans<<"\n";
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
