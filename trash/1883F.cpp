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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+1);
	vector<int> ahead(n+1, 0);
	map<int,bool> seen;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	for(int i=n; i>=1; i--)
 	{
 		if(seen[a[i]]==false) 
 		{
 			seen[a[i]]=true;
 			ahead[i]=0;
 		}
 		else
 		{
 			ahead[i]=1;
 		}
 	}
 	for(int i=n-1; i>=1; i--)
 	{
 		ahead[i]=ahead[i]+ahead[i+1];
 	}
 	lli ans=0;
 	map<int,bool> sn;
 	for(int i = 1; i<=n; i++)
 	{
 		if(sn[a[i]]==false)
 		{
 			ans+=(n-i+1-ahead[i]);
 			sn[a[i]]=true;
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

