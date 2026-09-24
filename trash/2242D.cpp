#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ll = long long int;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	string a,b; cin>>a>>b;
	int na = a.size(); int nb = b.size();
	vi A(na, 0), B(nb, 0); A[0]=a[0]-'0'; B[0]=b[0]-'0';
	for(int i = 1; i < na; i++)
	{
		A[i]=A[i-1]+(a[i]-'0');
		A[i]%=10;
	}
	for(int i = 1; i < nb; i++)
	{
		B[i]=B[i-1]+(b[i]-'0');
		B[i]%=10;
	}
	debug(A, B);
	vector<vi> dp(na+1, vi(nb+1, 0));
	for(int i = 1; i < na; i++)
	{
		for(int j = 1; j < nb; j++)
		{
			if(A[i-1]==B[j-1])
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
	}
	debug(dp[na-1][nb-1]);
	if(A[na-1]==B[nb-1])
	{
		cout<<1+dp[na-1][nb-1]<<endl;
	}
	else
		cout<<"-1\n";
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

