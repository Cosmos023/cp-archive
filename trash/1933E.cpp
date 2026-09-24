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
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void solve()
{
	int n;
	cin >> n;
	vector<lli> a(n+1),p(n+1,0);
 	for(int i=0; i<n; i++) cin >> a[i+1];
 	int q; cin>>q;
 	for(int i=1; i<=n; i++) p[i]=p[i-1]+a[i];
 	while(q--)
 	{
 		lli l, u; cin>>l>>u;
 		auto it =upper_bound(all(p),p[l-1]+u-1);
 		it--;
 		auto i =upper_bound(all(p),p[l-1]+u);
 		i--;
 		// if(*it>u+p[l-1]) it--;
 		cout<<min(it,i)-p.begin()<<" ";
 		// cout<<p[l-1]+u<<endl;
 	}
 	cout<<endl;
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

