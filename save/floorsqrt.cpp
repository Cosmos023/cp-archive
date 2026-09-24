#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
	int n;
	cin >> n;
	int ub = n/2+1;
	int lb  = 1;
	int ans = 0;
	while(lb<=ub)
	{
		int m = (lb+ub)/2;
		if(m*m<=n) 
		{
			ans = m;
			lb = m+1;
		}
		else
			ub = m-1;
	}
	cout<<ans<<"\n";
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