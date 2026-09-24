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
	int n,m;
	cin >> n>>m;
	vector<lli> a(n), b(m);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	for(int i=0; i<m; i++) cin>>b[i];
 	sor(b);
 	lli cur = min(b[0]-a[0], a[0]);
 	lli pc = cur;
 	for(int i = 1; i<n; i++)
 	{
 		auto k = lower_bound(all(b),cur+a[i]);
 		cur = a[i];
 		// a[i], *k-a[i]
 		if(k!=b.end() && a[i]>=pc && (*k-a[i])>=pc)
 			cur = min(a[i], *k-a[i]);
 		else if(k!=b.end() && *k-a[i]>=pc)
 			cur = *k - a[i];
 		else
 			cur = a[i];
 		if(pc>cur)
 		{
 			NO; return;
 		}
 		pc = cur;
 	}
 	YES;
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

