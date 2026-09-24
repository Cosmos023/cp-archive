#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<lli> a[m];
 	for(int i = 0; i<n; i++)
 	{
 		for(int j = 0; j<m; j++)
 		{
 			int x;
 			cin >> x;
 			a[j].push_back(x);
 		}
 	}
 	for(int i = 0; i<m; i++)
 	{
 		sort(a[i].begin(), a[i].end());
 	}
 	lli ans = 0;
 	for(int i = 0; i<m; i++)
 	{
 		for(int j = 0; j<n; j++)
 		{
 			ans += (2*j-n+1)*a[i][j];
 		}
 	}
 	cout << ans << "\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}