#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n;
	cin >> n;
 	int a[n];
 	vector<int> v;
 	cin >> a[0];
 	v.push_back(a[0]);
 	for(int i = 1; i<n; i++)
 	{
 		cin >> a[i];
 		if(a[i]!=a[i-1])
 		{
 			v.push_back(a[i]);
 		}
 	}
 	if(v.size()==1)
 	{
 		cout << "1\n"; 
 		return;
 	}
 	int ans = 2;
 	// for(int i = 0; i<v.size(); i++)
 	// {
 	// 	cout << v[i] << " ";
 	// }
 	// cout << "\n";
 	for(int i = 1; i<v.size()-1; i++)
 	{
 		if((v[i]>v[i-1] && v[i]>v[i+1]) || (v[i]<v[i-1] && v[i]<v[i+1]))
 			ans++;
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