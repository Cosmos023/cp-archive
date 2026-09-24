#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n;
	cin >> n;
 	lli a[n];
 	for(int i = 0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	lli c;
 	for(int i = 1; i<63; i++)
 	{
 		lli k = pow(2,i);
 		c = a[0]%k;
 		for(int j = 1; j<n; j++)
 		{
 			if(a[j]%k!=c)
 			{
 				cout << k << "\n";
 				return;
 			}
 		}
 	}
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