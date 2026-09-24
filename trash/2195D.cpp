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
	lli n;
	cin >> n;
	vector<lli> f(n+2,0);
	vl ans(n+2,0);
 	for(lli i=1; i<=n; i++)
 	{
 		cin >> f[i];
 	}
 	for(lli i=1; i<n; i++)
 	{
 		ans[i] = (f[i-1]+f[i+1]-2*f[i])/2;
 	}
 	// ans[1]=f[2];
 	// for(int i=3; i<=n; i++)
 	// 	ans[1]-=(i-2)*ans[i];
 	ans[1] = (f[2]-f[1]+(f[1]+f[n])/(n-1))/2;
 	ans[n]=f[n-1];
 	for(int i=1; i<n-1; i++)
 		ans[n]-=(n-i-1)*ans[i];
 	plist1(ans, n);
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

