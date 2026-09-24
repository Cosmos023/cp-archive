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
	int n;
	cin >> n;
	string s; cin>>s;
	map<int,lli> mp;
	mp[0]++;
	int c = 0;
 	for(int i=0; i<s.size(); i++)
 	{
 		if(s[i]=='1')
 		{
 			c++;
 		}
 		mp[c]++;
 	}
 	lli ans = 0;
 	for(int i=0; i<s.size(); i++)
 	{
 		if(n!=0)
 			ans+=(mp[i]*mp[i+n]);
 		else
 			ans+=(mp[i]*(mp[i]-1))/2;
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

