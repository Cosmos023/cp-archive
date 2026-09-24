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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";


lli merge(vll& a, int L, int R)
{
	if(L>=R) return 0;
	int m = (L+R)/2;
	lli c = 0;
	c += merge(a, L, m);
	c += merge(a, m+1, R);

	vll q;
	int i = L, j=m+1;
	while(i<=m && j<=R)
	{
		if(a[i]<=a[j])
		{
			q.push_back(a[i]);
			i++;
		}
		else
		{
			c+=(m+1-i);
			q.push_back(a[j]);
			j++;
		}
	}
	while(i<=m) {q.push_back(a[i]); i++;}
	while(j<=R) {q.push_back(a[j]); j++;}
	for(int k = 0; k<q.size(); k++) a[k+L] = q[k];
	return c;
}

void solve()
{
	int n;
	cin >> n;
	vector<pair<lli,lli>> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i].first >> a[i].second;
 	}
 	sor(a);
 	vll p(n);
 	for(int i=0; i<n; i++) p[i]=a[i].second;
 	lli ans = merge(p, 0, p.size()-1);
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

