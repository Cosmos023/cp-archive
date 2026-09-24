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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void solve()
{
	int n;
	cin >> n;
	vector<lli> a(n+1);
	vector<lli> ps(n+1,0);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	for(int i=1; i<=n; i++)
 	{
 		ps[i]=ps[i-1]+a[i];
 	}
 	int m; cin >> m;
	// lli ans = 0;
 	for(int i=0; i<m; i++)
 	{
 		lli x;
 		cin >> x;
 		cout<<lower_bound(all(ps),x)-ps.begin()<<"\n";
 		// ans+=ps[x]-ps[x-1];
 	}
 	// cout<<ans<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

