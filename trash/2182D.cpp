#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;
#define vi vector<int>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

const lli M = 998244353;

lli fac(lli x)
{
	if(x<=1) return 1LL;
	lli a = 1;
	while(x--) a=(a*(x+1))%M;
	return a;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+1);
	cin >> a[0];
	lli s = a[0];
	int m = INT_MAX;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 		m = min(m,a[i]);
 	}
 	for(int i=1; i<=n; i++) 
 	{
 		a[i] -= m;
 		s += a[i];
 	}
 	lli b = s/n;
 	int k = s - b*n;
 	// cout<<b<<" "<<k<<"\n";
 	lli ans = fac(n); 
 		int c = 0;
 	for(int i=1; i<=n; i++)
 	{
 		if(a[i]==b+1)
 		{
 			c++;
 		}
 		if(a[i]>b+1 || c>k)
 		{
 			cout<<"0"<<"\n";
 			return;
 		}
		// ans -=((n-k)*fac(n-1)*c);
 	}

 	lli z = 1;
 	for(lli i = k-c+1; i<=k; i++) z=(z*i)%M;
	// ans = fac(k)/fac(k-c)*fac(n-c);
	ans = z*fac(n-c)%M;
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