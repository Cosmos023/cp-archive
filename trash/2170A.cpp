#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	lli n;
	cin >> n;
 	if(n==1)
 	{
 		cout << 1 << "\n";
 		return;
 	}
 	if(n==2)
 	{
 		cout << 9 << "\n";
 		return;
 	}
 	cout << max(n*n*4-n-4, 5*(n*n-n-1)) << "\n";

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