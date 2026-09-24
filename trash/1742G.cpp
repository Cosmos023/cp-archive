#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ld = long double;
using ll = long long int;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int n;
	cin >> n;
	multiset<int> a;
	int OR = 0;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x; a.insert(x); OR|=x;
	}
	vi ans; int OR1 = 0;
	for(int i = 30; i>=0; i--)
	{
		if((OR>>i)&1 && !((OR1>>i)&1))
		{
			vector<pii> Z;
			for(int c:a)
			{
				if((c>>i)&1) Z.push_back({OR1|c, c});
			}
		debug(Z, a, OR, OR1, ans);
			int k = (*max_element(all(Z))).second;
			ans.push_back(k);
			a.erase(a.find(k));
			OR1|=k;
		}
		if(OR==OR1) break;
	}
	for(int c:a) ans.push_back(c);
	pL(ans);
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

