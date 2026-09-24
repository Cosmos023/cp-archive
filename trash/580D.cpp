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
	int n,m,k;
	cin >> n>>m>>k;
	map<pii, int> c;
	vll a(n+1);
 	for(int i=1; i<=n; i++) cin>>a[i];
 	for(int i=0; i<k; i++)
 	{
 		int x,y,ci;
 		cin>>x>>y>>ci;
 		c[{x,y}] = ci;
 	}
 	lli dp[1<<(n+1)][n+1];
 	for(int i = 0; i<(1<<(n+1)); i++)
 	{
 		for(int j = 0; j<=n; j++)
 		{
 			dp[i][j] = 0;
 		}
 	}
 	vi t(1<<n);
 	for(int i = 0; i<(1<<n); i++)
 	{
 		t[i] = i;
 	}
 	sort(all(t), [](const int& a, const int& b) {
    return __builtin_popcount(a) < __builtin_popcount(b); 
	});
	// pL(t);

	for(int i:t)
 	{
 		if(__builtin_popcount(i)==1)
 		{
 			int idx = (i<<1);
 			for(int j = 1; j<=n; j++)
 			{
 				dp[idx][j] = a[j];
 			}
 		}
 	}

	int x=0;
 	for(int i:t)
 	{
 		if(__builtin_popcount(i)==0) continue;
 		int idx = (i<<1);
 		for(int j = 1; j<=n; j++)
 		{
 			if((idx & (1<<j)) == 0) continue;
 			int M = -1;
 			int k;
 			for(k = 1; k<=n; k++) 
 			{
 					// cout<<idx<<" "<<(1<<k)<<" "<<"\n";
 				if((idx & (1<<k)) == 0)
 				{
		 			if(k!=-1)
		 			{
		 				dp[idx+(1<<k)][k] = max(dp[idx+(1<<k)][k], dp[idx][j]+a[k]+c[{j, k}]);
		 				x++;
		 			}
 					// if(M == -1)
 					// {
 					// 	M = k;
 					// }
 					// else
 					// {
 					// 	if(a[k]+c[{j, k}] > a[M]+c[{j, M}])
 					// 	{
 					// 		M = k;
 					// 	}
 					// }
 				}
 			}
 		}
 	}
 	// cout<<x;
 	lli ans = 0;
 	for(int i:t)
 	{
 		if(__builtin_popcount(i)!=m) continue;
 		int idx = (i<<1);
 		for(int j = 1; j<=n; j++)
 		{
 			// cout<<dp[idx][j] << " ";
 			ans = max(ans, dp[idx][j]);
 		}
 		// cout<<endl;
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

