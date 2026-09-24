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
	string s; cin>>s;
	ll k = 1;
	int y = 0;
	int z = 0;
	for(int i = 1; i < n-1; i++)
	{
		if(s[i]!=s[i-1]) k++;
		if(s[i]!=s[i-1] && s[i]!=s[i+1]) y=1;
		if(s[i]!=s[i-1] && s[i]!=s[i+1] && s[i-1]==s[i+1]) z=1;
	} 
	if(s[n-1]!=s[n-2]) k++;
	cout<<k-y-z<<endl;
	debug(k);
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

