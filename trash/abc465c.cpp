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
	int n;
	cin >> n; string s; cin>>s; s='!'+s;
	vector<lli> a(n+2,0);
	vector<lli> O(n+2,0);
	for(int i = n; i >= 1; i--)
	{
		if(s[i]=='o')
		{
			a[i]=i-a[i+1];
			O[i]=O[i+1]+1;
		}
		else
		{
			O[i]=O[i+1];
			a[i]=a[i+1];
		}
	}
	vi an(n+1,-1);
	for(int i = 1; i<=n; i++)
	{
		if(O[i]%2)
		{
			an[a[i]-i+1]=i;
		}
		else
		{
			an[-a[i]+i]=i;
		}
	}
	debug(a);
	debug(O);
	debug(an);
	pL1(an,n);
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

