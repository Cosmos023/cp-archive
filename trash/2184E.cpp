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

lli t(lli n)
{
	return n*(n+1)/2;
}

// map<vector<int>> mv;

void solve()
{
	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> d;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	for(int i=1; i<n; i++)
 	{
 		int k = abs(a[i]-a[i-1]);
 		d.push_back(k);
 		// mv[k].push_back(i);
 	}
 	// pL(d);
 	d.push_back(-1);
 	cout<<t(n-1)<<" ";
 	for(int i = 2; i<n; i++)
 	{
 		lli ans = 0LL;
 		int j = 0;
 		lli c = 0;
 		while(j<n-1)
 		{
 			if(d[j]<i)
 			{
 				ans+=t(c);
 				// cout<<c<<"c ";
 				c = 0;
 			}
 			if(d[j]>=i)
 				c++;
 			j++;
 		}
 		// if(c!=1)
 		ans += t(c);
 		cout<<ans<<" ";
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

