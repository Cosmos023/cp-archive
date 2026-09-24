#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
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
	int n, k;
	cin >> n >> k;
	string s, t; cin>>s>>t;
	vi C(26, 0);
	vi Z(n, 0), P(n, 0);
	for(int i = 0; i < n; i++)
	{
		C[s[i]-'a']++;
		C[t[i]-'a']--;
		Z[i] = (s[i]==t[i]);
	}
	for(int i = 1; i < n; i++) P[i]=P[i-1]+Z[i];
	for(int i = 0; i < 26; i++)
	{
		if(C[i]!=0)
		{
			NO; return;
		}
	}
	if(n>=2*k)
	{
		YES; return;
	}
	if(n<=k)
	{
		if(s==t) YES; else NO;
		return;
	}
	int sz = 2*k-n;
	if(P[k-1] - P[k-1-sz] == sz) YES; else NO;
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

