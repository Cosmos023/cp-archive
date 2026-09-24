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
	int n, x, y;
	cin >> n>>x>>y;
	vector<int> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}

 	lli M = *max_element(all(a));
 	sor(a);
 	lli m = INT_MIN;
 	int mi = -1;
 	for(int i=0; i<n; i++)
 	{
 		if(a[i]%x>m)
 		{
 			mi = i;
 			m = a[i]%x;
 		}
 	}
 	lli ans = a[mi];
 	for(int i=0; i<n; i++)
 	{
 		if(i==mi) continue;
 		ans += (a[i]/x*y);
 	}
 	cout<<max(M, ans)<<"\n";
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

