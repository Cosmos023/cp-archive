#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vll = vector<ll>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using ld = long double;
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
	int x,y;
	cin >> x >> y;
	string s; cin>>s;
	int u,r,l,d;u=r=l=d=0;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='U')u++;
		if(s[i]=='R')r++;
		if(s[i]=='L')l++;
		if(s[i]=='D')d++;
	}
	if(x<=r && x>=-l && y<=u &&  y>=-d) YES; else NO;
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

