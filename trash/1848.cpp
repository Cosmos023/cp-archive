#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> va[k+1];
 	for(int i = 0; i<n; i++)
 	{
 		int x;
 		cin >> x;
 		va[x].push_back(i);
  	}
  	int ans = INT_MAX;
  	for(int i = 1; i<=k; i++)
  	{
  		va[i].push_back(n);
  		vector<int> k;
  		k.push_back(v[i][0]-1);
  		int m = v[i][0]-1, mi=-1;
  		for(int j = 1; j<va[i].size(); j++)
  		{
  			k.push_back(va[i][j]-va[i][j-1]-1); 
  			if(k(j)>m)
  			{
  				m = va[i][j-1];
  				mi=j-1;
  			}
  		}
  		va[i][mi] = va[i][mi]/2;
  		m = INT_MIN;
  		for(int j = 0; j<va[i].size()-1; j++)
  		{
  			if(va[i][j]>m)
  			{
  				m = va[i][j];
  			}
  		}
  		ans = min(ans, m);
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