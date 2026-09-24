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
	int n,q;
	cin >> n>>q;
	vector<int> a(n+1);
	vector<int> x(n+1);
	vector<int> b(n+1);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 		x[i] = a[i];
 	}
 	for(int i=1; i<=n; i++) cin >> b[i];


 	int M = max(a[n],b[n]);
 	for(int i=n; i>=1; i--)
 	{	
 		M = max(M,max(a[i],b[i]));
 		a[i] = M;
 	}
 	x[0] = 0;
 	x[1] = a[1];
 	for(int i=1; i<=n; i++)
 	{
 		x[i] = x[i-1]+a[i];
 	}

 	while(q--)
 	{
 		int l, r;
 		cin >> l >> r;
 		cout<<x[r]-x[l-1]<<" ";
 	}
 	cout<<"\n";
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

