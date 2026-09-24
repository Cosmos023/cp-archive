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

vi Z(1003,INT_MAX);

void pc()
{
	Z[0]=INT_MAX;
	Z[1] = 0; Z[2] = 1;
	for(int i = 2; i<1002; i++)
	{
		for(int j = 1; j<i; j++)
		{
			int k = 1;
			while(k<=j)
			{
				if(j+j/k == i)
				{
					Z[i] = min(Z[i], Z[j]+1);
				}
				k++;
			}
		}
	}
}

void solve()
{
	int n,k;
	cin >> n>>k;
	vector<int> b(n+1),c(n+1);
	lli S = 0;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> b[i];
 		S+=Z[b[i]];
 	}
 	for(int i=1; i<=n; i++) cin>>c[i];
 	if(k>=S)
 	{
 		lli C = 0;
 		for(int i=1; i<=n; i++) C+=c[i];
 		cout<<C<<"\n"; return;
 	}
 	int dp[n+1][k+1];
 	for(int i = 0; i<=n; i++)
 	{
 		for(int j = 0; j<=k; j++)
 		{
 			dp[i][j]=0;
 		}
 	}
 	for(int i = 1; i<=n; i++)
 	{
 		for(int j = 0; j<=k; j++)
 		{
 			dp[i][j] = dp[i-1][j];
 			if(j-Z[b[i]]>=0)
 			{
 				dp[i][j] = max(dp[i][j], dp[i-1][j-Z[b[i]]]+c[i]);
 			}
 		}
 	}
 	cout<<dp[n][k]<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	pc();
	// pL(Z);
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

