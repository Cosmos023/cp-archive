#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

void solve()
{
	int n, l;
	cin >> n >> l;
	int a[n];
 	for(int i=0; i<n; i++) cin >> a[i];
 	sort(a,a+n);
 	lli d = 0;
 	for(int i=1; i<n; i++)
 	{
 		d = max(d, 1LL*(a[i]-a[i-1]));
 	}
 	double k;
 	if(d%2==0)
 	{
 		k = d/2;
 	}
 	else
 	{
 		k = d/2+0.5;
 	}
 	cout << fixed << max(1.0*max(l-a[n-1], a[0]), k) << "\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	// int t;
	// cin >> t;
	// while(t--) 
	{
		solve();
	}
}