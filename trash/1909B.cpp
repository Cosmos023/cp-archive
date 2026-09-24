#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n;
	cin >> n;
 	lli a[n];
 	cin >> a[0];
 	lli g = a[0];
 	int e = 0;
 	if(a[0]%2==0) e = 1;
 	lli md = INT_MAX;
 	for(int i = 1; i<n; i++)
 	{
 		cin >> a[i];
 		g = gcd(g,a[i]);
 		if(a[i]%2==0)
 			e=1;
 		md = min(md,abs(a[i]-a[i-1]));
 	}
 	if(e)
 	{
 		cout << 2*g << "\n";
 		return;
 	}
 	else
 		cout << 2*md << "\n";
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