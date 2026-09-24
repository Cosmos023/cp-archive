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
	lli n;
	cin >> n;
	string s; cin>>s;
	lli ans = 0;
 	// for(int i=0; i<n; i++)
 	// {
 	// 	for(int j = i+1; j<n; j++)
 	// 	{
 	// 		if(s[i]==s[j]) continue;
 	// 		ans+=min(i+1, n-j);
 	// 	}
 	// }

	if(l%2)
	{
		ans = (n*(2*n*n+3*n-2)+3)/24;
	}
	else
		ans = (n*(2*n*n+3*n-2))/24;

	vector<vector<int>> v(26);

	for(int i = 0; i<n; i++)
	{
		v[s[i]-26].push_back(i);
	}

	for(int c = 0; c<26; c++)
	{
		for(int j = 0; j<s.size(); j++)
		{
			
		}
	}

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

