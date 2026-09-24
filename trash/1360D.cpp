#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

void solve()
{
	int n, k;
	cin >> n >> k;
	int i;
	if(n<=k)
	{
		cout << "1\n";
		return; 
	}
	int ans = -1;
	for(int i=1; i<=sqrt(n); i++)
	{	
		if(n%i==0)
		{
			if(n/i <= k)
			{
				ans = max(ans, n/i);
			}
			else if(i<=k)
			{
				ans = max(ans,i);
			}
		}
	}
	cout << n/ans << "\n";
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