#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n;
	cin >> n;
 	vector<pair<char,int>> v;
 	for(int i = 0; i<n; i++)
 	{
 		int x;
 		cin >> x;
 		v.push_back({0, x});
 	}
 	string s;
 	cin >> s;
 	for(int i = 0; i<n; i++)
 	{
 		v[i].first = s[i]; 
 	}
 	sort(v.begin(),v.end());

 	for(int i = 0; i<n; i++)
 	{
 		// cout << v[i].first << v[i].second << endl;
 		if(v[i].second == (i+1))
 			continue;
 		if(v[i].second < (i+1) && v[i].first=='R')
 			continue;
 		if(v[i].second > (i+1) && v[i].first=='B')
 			continue;
 		cout << "NO\n";
 		return;
 	}
 	cout << "YES\n";

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