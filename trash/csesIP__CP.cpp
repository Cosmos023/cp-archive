#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	lli n, m;
	cin >> n >> m;
 	if((2*n-m)%3==0 && (2*m-n)%3==0 && (2*n-m)>=0 && (2*m-n)>=0)
 		cout << "YES\n";
 	else
 		cout << "NO\n";
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