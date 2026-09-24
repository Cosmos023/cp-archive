#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n;
	cin >> n;
	int a[n+1];
 	for(int i = 1; i<=n; i++) cin >> a[i];
 	int l = 1, r = n;
 	int ml = 1, mr = n;
 	while(l<r)
 	{
 		if(a[l]!=ml&&a[l]!=mr&&a[r]!=ml&&a[r]!=mr)
 		{
 			cout << l << " " << r << "\n";
 			return;
 		}
 		if(a[l]==ml)
 		{
 			ml++;
 			l++;
 		}
 		else if(a[l]==mr)
 		{
 			l++;
 			mr--;
 		}
 		if(a[r]==mr)
 		{
 			r--;
 			mr--;
 		}
 		else if(a[r]==ml)
 		{
 			r--;
 			ml++;
 		}
 	}
 	cout << "-1\n";
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