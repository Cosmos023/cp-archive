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
	int n,x;
	cin >> n>>x;
	string s; cin>>s;
	int C=0;
	for(char c:s) if(c=='#')C++;
	s="!"+s;
	if(C==0 || x==1 || x==n)
	{
		cout<<"1\n";
		return;
	}
	int j=0, k=n+1;
 	for(int i=x-1; i>0; i--)
 	{
 		if(s[i]=='#')
 		{
 			j=i; break;
 		}
 	}
 	for(int i=x+1; i<=n; i++)
 	{
 		if(s[i]=='#')
 		{
 			k=i; break;
 		}
 	}
 	// cout<<j<<k<<"\n";
 	if(j < n-k+1)
 	{
 		cout<<min(x-1,n-k+1)+1<<"\n";
 	}
 	else
 		cout<<min(j,n-x)+1<<"\n";
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

