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
	int n, q;
	cin >> n >> q;
	string s,t; cin>>s>>t;
	vll n11(n+1);
	vll n00(n+1);
	vll n10(n+1);
	vll n01(n+1);
	for(int i=1; i<=n; i++)
	{
		n11[i] = n11[i-1] + (s[i-1]=='1' && t[i-1]=='1');
		n00[i] = n00[i-1] + (s[i-1]=='0' && t[i-1]=='0');
		n01[i] = n01[i-1] + (s[i-1]=='0' && t[i-1]=='1');
		n10[i] = n10[i-1] + (s[i-1]=='1' && t[i-1]=='0');
	}
	while(q--)
	{
		int l,r; cin>>l>>r;
		if(n11[r]-n11[l-1] + n00[r]-n00[l-1] >= abs(n01[r]-n01[l-1] - (n10[r]-n10[l-1])))
			YES;
		else NO;
	}
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

