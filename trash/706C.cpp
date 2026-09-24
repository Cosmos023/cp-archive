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

string reverse(string& s)
{
	string k = "";
	for(int i = s.size()-1; i>=0; i--) k+=s[i];
	return k;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> ct(n);
 	for(int i=0; i<n; i++) cin>>ct[i];
	vector<string> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	vector<vector<lli>> dp(n, vector<lli>(2, LLONG_MAX));
 	dp[0][0]=0;
 	dp[0][1]=ct[0];
 	for(int i=1; i<n; i++)
 	{
 		string& c = a[i];
 		string cr = reverse(a[i]);
 		string& p = a[i-1];
 		string pr = reverse(a[i-1]);
 		if(c>=p)
 		{
 			dp[i][0] = min(dp[i][0], dp[i-1][0]);
 		}
 		if(c>=pr)
 		{
 			dp[i][0] = min(dp[i][0], dp[i-1][1]);
 		}
 		if(cr>=p && dp[i-1][0]!=LLONG_MAX)
 		{
 			dp[i][1] = min(dp[i][1], dp[i-1][0]+ct[i]);
 		}
 		if(cr>=pr && dp[i-1][1]!=LLONG_MAX)
 		{
 			dp[i][1] = min(dp[i][1], dp[i-1][1]+ct[i]);
 		}
 	}
 	lli ans = min(dp[n-1][0],dp[n-1][1]);
 	cout<<((ans==LLONG_MAX)?(-1):ans)<<endl;
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

