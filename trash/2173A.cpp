#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int ans = 0;
	int left = 0;
	for(int i = 0; i<s.size(); i++)
	{
		if(s[i]=='1')
		{
			left = k;
		}
		else if(left>0)
		{
			left = max(left-1,0);
		}
		else
		{
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