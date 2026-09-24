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
	int n;
	cin >> n;
	vector<int> a(n);
	multiset<int> s;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		s.insert(a[i]);
 	}
 	int k = n-1;
 	int ans = 1;
 	while(k>=0)
 	{
 		auto z = s.end();
 		z--;
 		int m = *z;
 		while(m!=a[k])
 		{
 			s.erase(s.find(a[k]));
 			k--;
 		}
 		s.erase(s.find(a[k]));
 		k--;
 		if(k>=0)
 			ans++;
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

