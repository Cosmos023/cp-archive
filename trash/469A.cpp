#include <bits/stdc++.h>
using namespace std;
 
int mp[101];

void solve()
{
	int n;
	cin >> n;
	int p;
	cin >> p;
 	for(int i=0; i<p; i++)
 	{
 		int x;
 		cin >> x;
 		mp[x]++;
 	}
 	int q;
	cin >> q;
 	for(int i=0; i<q; i++)
 	{
 		int x;
 		cin >> x;
 		mp[x]++;
 	}
 	for(int i = 1; i<=n; i++)
 	{
 		if(mp[i]==0)
 		{
 			cout<<"Oh, my keyboard!";
 			return;
 		}
 	}
 	cout<<"I become the guy.";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--) 
	{
		solve();
	}
}



