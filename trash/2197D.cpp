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
	vector<lli> a(n+1);
	vector<int> d1(n+1, 0);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	lli ans = 0;
 	for(lli j=1; j<=n; j++)
 	{
 		for(int k = 1; k<=10; k++)
 		{
	 		int i = j-k*a[j];
	 		if(i>=1 && i<=n && a[i]==k) ans++;
 		}
 	}
 	for(lli i=1; i<=n; i++)
 	{
 		if(a[i]>=1 && a[i]<=10) continue;
		lli j = i%(a[i])+a[i];
 		for(; j<=n; j+=a[i])
 		{
 			if(a[i]*a[j] == (j-i)) ans++;
 		}
 	}
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

