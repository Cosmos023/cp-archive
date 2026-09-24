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
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<vi> a(n+1, vi(m+1));
	for(int i = 1; i<=n; i++)
	{
		for(int j = 1; j<=m; j++)
		{
			cin>>a[i][j];
		}
	}
	while(k--)
	{
		int c; cin>>c;
		int x = c, y = 1;
		while(y<=n)
		{
			if(a[y][x]==1)
			{
				a[y][x]=2;
				x++;
			}
			else if(a[y][x]==3)
			{
				a[y][x]=2;
				x--;
			}
			else
			{
				y++;
			}
		}
		cout<<x<<" ";
	}
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

