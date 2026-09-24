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
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int n;
	cin >> n;
	string s; cin>>s;
	int i = 0;
	while(i<n && s[i]=='0') i++;
	if(i==n)
	{
		cout<<"Bob\n"; return;
	}
	vi z;
	int j;
	for(j = i+1; j<n; j++)
	{
		if(s[j]!=s[j-1])
		{
			z.push_back(j-i);
			i=j;
		}
	}
	if(z.size()%2) z.push_back(j-i);
	debug(z);
	int k = 0;
	lli Z=0, Y=0;
	int m = 0;
	for(int i = 1; i<z.size(); i+=2)
	{
		Z+=z[i];
		if(Z%2)
		{
			cout<<"Alice\n"; return;
		}
		Y+=z[i-1];
		if(Y%2) m=1;
	}
	if(m)
		cout<<"Alice\n";
	else
		cout<<"Bob\n";
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

