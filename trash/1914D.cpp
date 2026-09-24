#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

vector<pair<int,int>> v;

void max3(int a[], int n)
{
	for(int k = 0; k<3; k++)
	{
		int max = INT_MIN;
		int mi;
		for(int i = 0; i<n; i++)
		{
			if(a[i]>max)
			{
				max = a[i];
				mi = i;
			}
		}
		a[mi] = INT_MIN;
		v.push_back({max, mi});
		// cout << max << " ";
	}
}

void solve()
{
	int n;
	cin >> n;
 	int a[n], b[n], c[n];
 	for(int i = 0; i<n; i++) cin >> a[i];
 	for(int i = 0; i<n; i++) cin >> b[i];
 	for(int i = 0; i<n; i++) cin >> c[i];
	v.clear();
 	max3(a, n); max3(b, n); max3(c, n);
 	int ans = 0;
 	int x = -1, y = -1, z = -1;
 	for(int i = 0; i < 3; i++)
 	{
 		for(int j = 3; j < 6; j++)
 		{
 			for(int k = 6; k < 9; k++)
			{
				if(v[i].second==v[j].second || v[j].second==v[k].second || v[i].second==v[k].second)
					continue;
				ans = max(ans, v[i].first+v[j].first+v[k].first);
			}
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