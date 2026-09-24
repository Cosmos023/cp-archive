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
	vector<int> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	int ans = 1;
 	// pL(a);
 	int x = a[0]%2;
 	for(int i=0; i<n; i+=2)
 	{
 		if(a[i]%2!=x) ans = 0;
 	}
 	int y = a[1]%2;
 	for(int i=1; i<n; i+=2)
 	{
 		if(a[i]%2!=y) ans = 0;
 	}
 	if(ans) 
 		cout<<"YES\n";
 	else 
 		cout<<"NO\n";
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

