#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
//for(int i=0; i<n; i++)

void solve()
{
	int n;
	cin >> n;
	int x;
	unordered_set<int> s; 
 	for(int i=0; i<n; i++)
 	{
 		cin >> x;
 		s.insert(x);
 	}
 	lli l = s.size();
 	while(s.find(l)==s.end())
 	{
 		s.insert(l);
 		l++;
 	}
 	cout << l << "\n";
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