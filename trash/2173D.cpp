#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n, k;
	cin >> n >> k;
	int ans = 0;
	while(k)
	{
		if(n==0)
		{
			ans+=(k); break;
		}
		int m = 0;
		int mi;
		int M = -1;
		int z = 31;
		while(z--)
		{
			int i = 0;
			for(i = m; i<=31; i++)
			{
				if((n>>i) & 1)
					break;
			}
			int j = i;
			for(j = i; j<=31; j++)
			{
				if(((n>>j)&1) == 0)
					break;
			}
			m = j;
			if((j-i)>M)
			{
				M = j-i;
				mi = i;
			}
		}
		ans+=M;
		n = n+pow(2,mi);
		k--;
		// cout << ans << " i j " << i << " " << j <<" \n";
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