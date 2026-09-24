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
	vector<int> p(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		p[i]=a[i];
 	}
 	sor(p);
 	for(int i=0; i<n; i++)
 	{
 		if(a[i]==p[i]) continue;
 		if(gcd(p[0],a[i])!=p[0])
 		{
 			cout<<"NO\n";
 			return;
 		}
 	}
 	cout<<"YES\n";
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

