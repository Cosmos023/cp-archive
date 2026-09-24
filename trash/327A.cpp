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
	vector<int> a(n+1);
	a[0]=0;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}

	// vi d(n+1, 0);
	int v = 0;
	int n1 = 0;
	for(int i=1; i<=n; i++)
	{
		if(a[i]==1)
		{
			n1++;
			v--;
		}
		else
			v++;
		a[i] = v;
	}

	int l = 0, r = 1;
	int md = a[1]-a[0];
	while(r<=n)
	{
		md = max(md, a[r]-a[l]);
		if(a[r]<a[l]) l = r;
		r++;
	}
	cout<<n1+md<<"\n";
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

