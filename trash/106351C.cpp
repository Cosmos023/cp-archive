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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n";

void solve()
{
	int n,m;
	cin >> n>>m;
	vector<lli> h(n), w(n);
 	for(int i=0; i<n; i++) cin>>h[i];
 	for(int i=0; i<m; i++) cin>>w[i];
 	sor(h);
 	sor(w);
 	vll sums(n, 0);
 	lli s=0;
 	for(int i = 1; i<n; i+=2) s+=abs(h[i]-h[i+1]);
 	sums[0]=s;
 	for(int i = 1; i<n; i++)
 	{
 		if(i%2==1)
 		{
	 		s-=abs(h[i]-h[i+1]);
	 		s+=abs(h[i+1]-h[i-1]);
	 		sums[i]=s;
 		}
 		else
 		{
 			s-=abs(h[i-2]-h[i]);
 			s+=abs(h[i-1]-h[i-2]);
 			sums[i]=s;
 		}
 	}
 	// pL(sums);
 	lli ans = LLONG_MAX;
 	// for(int i = 0; i<n; i++)
 	// {
 	// 	auto j = lower_bound(all(w), h[i]);
 	// 	lli dif = LLONG_MAX;
 	// 	if(j == w.end())
 	// 	{
 	// 		j--;
 	// 		dif = min(dif, abs(*j - h[i]));
 	// 		ans = min(ans, sums[i]+dif);
 	// 		continue;
 	// 	}
 	// 	dif = min(dif, abs(*j - h[i]));
 	// 	if(j!=w.begin())
 	// 	{
 	// 		j--;
 	// 		dif = min(dif, abs(*j - h[i]));
 	// 	}
 	// 	ans = min(ans, sums[i]+dif);
 	// }
 	vector<pll> s1(n), s2(n);
 	for(int i = 0; i<n; i++) s1[i]={sums[i]+h[i],h[i]};
 	for(int i = 0; i<n; i++) s2[i]={sums[i]-h[i],h[i]};
 	for(int i = 0; i<m; i++)
 	{
 		auto j = lower_bound(all(h), w[i]);
 		if(j!=h.end())
 		{
 			ans = min(ans, s1[j-h.begin()]-w[i]);
 		}
 		auto k = upper_bound(all(h), w[i]);
 		if(k!=h.begin())
 		{
 			k--;
 			ans = min(ans, s2[k-h.begin()]+w[i]);
 		}
 	}

 	cout<<ans<<"\n";
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
