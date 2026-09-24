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
	string s; cin>>s;
	string c = s;
	int i = 1;
	lli ans = 0;
	int n = s.size();
	while(i<n)
	{
		if(s[i]==s[i-1] && c[i-1]!='!')
		{
			c[i]='!';
			ans++;
		}
		else if(i>1 && s[i]==s[i-2] && c[i-2]!='!')
		{
			c[i]='!';
			ans++;
		}
		// if(i<n-2 && (s[i]==s[i+1])&&(s[i]==s[i+2]))
		// {
		// 	ans+=2; i=i+3; continue;
		// }
		// if(i<n-2 && s[i]==s[i+2])
		// {
		// 	ans++; i=i+3; continue;
		// }
		// if(i<n-1 && s[i]==s[i+1])
		// {
		// 	ans++; i=i+2; continue;
		// }
		i++;
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

