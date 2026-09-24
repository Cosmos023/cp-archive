#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n;
	cin >> n;
	int y, r;
	cin >> y >> r;
	cout << min(n, y/2+r) << "\n";
 	
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