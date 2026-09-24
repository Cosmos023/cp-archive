#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	lli n, x, y;
	cin >> n >> x >> y;
	lli l = lcm(x,y);
	lli p = n/x - n/l;
	lli q = n/y - n/l;
	cout << n*(n+1)/2 - (n-p)*(n-p+1)/2 - q*(q+1)/2 << "\n";
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