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
	int n;
	cin >> n;
	vector<int> a(n+1);
	vector<int> dp(n+1, INT_MAX);
 	for(int i=1; i<=n; i++) cin >> a[i];
 	dp[0]=INT_MIN;
 	for(int i=1; i<=n; i++)
 	{
 		auto it = upper_bound(all(dp),a[i]);
 		it--;
 		if(*it<a[i])
 		{
 			dp[it-dp.begin()+1] = min(dp[it-dp.begin()+1], a[i]);
 		}
 	}
 	int i = n;
 	while(dp[i]==INT_MAX)i--;
 	cout<<i<<endl;
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

