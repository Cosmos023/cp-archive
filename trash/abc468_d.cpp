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
	string s; cin>>s;
	int n = s.size();
	ll ans = 0;
	for(int i = 0; i < n; i++)
	{
		int l = i, r=i;
		int c = 0;
		while(l>=0 && r<n)
		{
			if(s[l]!=s[r]) c++;
			if(c>=2) break; else ans++;
			l--; r++;
		}
		debug(ans);
	}
	for(int i = 0; i < n-1; i++)
	{
		int l = i, r=i+1;
		int c = s[l]!=s[r]; l--; r++;
		ans++;
		while(l>=0 && r<n)
		{
			if(s[l]!=s[r]) c++;
			if(c>=2) break; else ans++;
			l--; r++;
		}
		debug(ans);
	}
	cout<<ans<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--)
	{
		solve();
	}
}

