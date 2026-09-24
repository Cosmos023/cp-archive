#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
//for(int i=0; i<n; i++)

void solve()
{
	int n;
	cin >> n;
	int a[n];
 	for(int i=0; i<n; i++) 
 	{
 		cin >> a[i];
 		a[i] -= i;
 	}

 	map<int, int> mp;
 	for(int i=0; i<n; i++) 
 	{
 		mp[a[i]]++;
 	}
 	lli ans = 0;
 	for(auto p:mp) 
	{
		ans += 1LL*p.second*(p.second-1)/2;
	}
	cout << ans << "\n";
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