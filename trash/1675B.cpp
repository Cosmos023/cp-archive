#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

void solve()
{
	int n;
	cin >> n;
	int a[n];
 	for(int i=0; i<n; i++) cin >> a[i];

 	int ans = 0;
 	for(int i = n-2; i>=0; i--)
 	{
 		// for(int i = 0; i<n; i++) cout << a[i] << " ";
 		// 	cout << "\n";
 		if(a[i+1]==0)
 		{
 			cout << "-1\n";
 			return;
 		}
 		while(a[i]>=a[i+1])
 		{
 			a[i] = a[i]/2;
 			ans++;
 		}
 	}
 	cout << ans << "\n";
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