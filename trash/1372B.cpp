#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

void solve()
{
	int n;
	cin >> n;
	int k = n/2;
	int l = INT_MAX;
	int i;
	// int mini;
	for(i = k; i>=1; i--)
	{
		// int z = lcm(i,n-i);
		if((n-i)%i==0)
		{
			break;
		}
	}
	// cout << mini << " " << (n-mini) << "\n"; 
	cout << i << " " << (n-i) << "\n"; 
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