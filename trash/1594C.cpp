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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void solve()
{
	int n; char c; string s;
	cin >> n >> c >> s;
	int z=1;
 	for(int i = 0; i<n; i++)
 	{
 		if(s[i]!=c) z=0;
 	}
 	if(z){cout<<"0\n"; return;}
	if(s[n-1]==c)
	{
		cout<<"1\n"<<n<<"\n"; return;
	}
 	s='!'+s;
 	for(int i = 1; i<=n; i++)
 	{
 		int y = 1;
 		for(int j = i; j<=n; j+=i)
 		{
 			if(s[j]!=c)
 			{
 				y=0; break;
 			}
 		}
 		if(y)
 		{
 			cout<<"1\n"<<i<<"\n"; return;
 		}
 	}
 	cout<<"2\n"<<n<<" "<<n-1<<"\n";
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

