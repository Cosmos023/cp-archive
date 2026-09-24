#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	int y = 0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	if(count(all(a),1))
 	{
 		cout<<n-count(all(a),1)<<"\n"; return;
 	}
 	int ans = INT_MAX;
 	for(int i = 0; i<n; i++)
 	{
 		int g = a[i]; int j;
 		for(j=i+1; j<n; j++)
 		{
 			g = gcd(g, a[j]);
 			if(g==1) break;
 		}
 		if(g==1)
 			ans = min(ans, j-i+1);
 	}
 	if(ans==INT_MAX)
 	{
 		cout<<"-1\n"; return;
 	}

 	cout<<n+ans-2<<"\n";
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

