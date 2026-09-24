#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	map<int,int> m;
	cin >> a[0];
	m[a[0]]++;
	int g = a[0];
 	for(int i = 1; i<n; i++)
 	{
 		cin >> a[i];
 		g = gcd(g,a[i]);
 		m[a[i]]++;
 	}
 	int a1 = 1;
 	for(int i = g; i<=k; i+=g)
 	{
 		if(m[g]==0)
 		{
 			a1 = 0;
 			break;
 		}
 	}
 	if(a1) 
 	{
 		cout << "1\n" << g << "\n";
 		return;
 	}
 	sort(a,a+n);

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