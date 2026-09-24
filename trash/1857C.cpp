#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

void solve()
{
	int n;
	cin >> n;
	map<int,int> um;
	vector<pair<int,int>> v;
 	for(int i = 0; i<n*(n-1)/2; i++)
 	{
 		int x;
 		cin >> x;
 		um[x]++;
 	}
 	int d = 0;
 	for(auto i = um.begin(); i!=um.end();i++) 
 	{
 		v.push_back({i->first, i->second});
 	}
 	int l = 2*v[v.size()-1].second;
 	int k = 1;
 	while(k*(k-1)!=l) k++;
 	for(int i = 0; i<k; i++)
 	{
 		cout << v[v.size()-1].first << " ";
 		d++;
 	}
 	for(int i = v.size()-2; i>=0; i--)
 	{
 		// cout << v[i].first << " " << v[i].second << "\n";
 		l = 2*v[i].second;
 		k = 1;
 		while(((k+d)*(k+d-1)-d*(d-1))!=l) k++;
 		for(int j = 0; j<k; j++)
 		{
 			cout << v[i].first << " ";
 			d++;
 		}
 	}
 	cout << "\n";
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