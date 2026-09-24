#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define all(a) (a).begin(), (a).end()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> c(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		c[i] = a[i];
 	}
 	sor(c);
 	vi v;
 	for(int i=0; i<n; i++)
 	{
 		if(a[i]!=c[i]) v.push_back(c[i]);
 	}
 	if(v.size()==0)
 	{
 		cout<<"-1\n";
 		return;
 	}
 	int ans = INT_MIN;
 	for(int i=1; i<v.size(); i++)
 	{
 		ans = max(ans, abs(v[i]-v[i-1]));
 	}
 	cout<<ans<<"\n";
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

