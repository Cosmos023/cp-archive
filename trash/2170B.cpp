#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n;
	cin >> n;
 	int b[n+1];
 	b[n] = INT_MAX;
 	lli sum = 0;
 	for(int i = 0; i<n; i++)
 	{
 		cin >> b[i];
 		sum+=b[i];
 	}
 	sort(b,b+n);
 	int l, r;
 	for(int i = 0; i<n; i++)
 	{
 		if(b[i]!=0)
 		{
 			l=i;
 			break;
 		}
 	}
 	r=n-1;
 	for(int i = l+1; i<n; i++)
 	{
 		int s1 = i-l+1;
 		if((sum-s1)>=(n-1) && (n-1)>=(b[n-1]-1))
 		{
	 		continue;
 		}
 		
	 	r = i-1;
	 	break;
 	}
 	cout << (r-l+1) << "\n";
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