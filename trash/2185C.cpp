#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	int x;
	set<int> s;
 	for(int i=0; i<n; i++)
 	{
 		cin >> x;
 		s.insert(x);
 	}
 	s.insert(INT_MIN);
 	s.insert(INT_MAX);
 	vi a;
 	for(int k:s) a.push_back(k);
 	int c = 1, m = 1;
 	for(int i = 1; i<a.size();i++)
 	{
 	// cout<<c<<"\n";
 		if(a[i]==a[i-1]+1)
 		{
 			c++;
 		}
 		else
 		{
 			m = max(m, c);
 			c = 1;
 		}
 	}
 	cout<<m<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

