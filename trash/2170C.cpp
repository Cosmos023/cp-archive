#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	lli n, k;
	cin >> n >> k;
 	lli q[n];
 	lli r[n];
 	for(int i = 0; i<n; i++)
	 	cin >> q[i];
 	for(int i = 0; i<n; i++)
	 	cin >> r[i];
	sort(q,q+n);
	sort(r,r+n);
	lli f = 0, g = n-1;
	lli ans = 0;
	while(g>=0 && f<n)
	{
		lli x = q[f]*(r[g]+1)+r[g];
		if(x<=k)
		{
			ans++;
			g--;
			f++;
		}
		else
			g--;
	}
	lli h = 0, i = n-1;
	lli ans1 = 0;
	while(i>=0 && h<n)
	{
		lli x = q[i]*(r[h]+1)+r[h];
		if(x<=k)
		{
			ans1++;
			i--;
			h++;
		}
		else
			i--;
	}
	cout << max(ans,ans1) << "\n";
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