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
	vector<int> f(n+1,0);
	int x;
 	for(int i=0; i<n; i++)
 	{
 		cin >> x;
 		if(x<=n) f[x]++;;
 	}
	vector<int> a(n+1,f[1]);
 	for(int i = 2; i<=n; i++)
 	{
 		for(int j = i; j<=n; j+=i)
 		{
 			a[j]+=f[i];
 		}
 	}
 	// plist1(a,n);
 	int ans = *max_element(next(a.begin(),1),a.end());
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

