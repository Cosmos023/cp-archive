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
#define YES cout<<"Yes\n"
#define NO cout<<"No\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int x,y,l,r,a,b; cin>>x>>y>>l>>r>>a>>b;
	int X=0,Y=0;
	if(b<=l || a>=r)
	{
		Y+=(b-a);
	}
	else
	{
		if(a<l && b<=r)
		{
			Y+=(l-a);
			X+=b-l;
		}
		else if(b>r && a>=l)
		{
			Y+=b-r;
			X+=r-a;
		}
		else if(b>r && a<l)
		{
			Y+=l-a + b-r;
			X+=r-l;
		}
		else
		{
			X+=b-a;
		}
	}
	cout<<X*x+Y*y;
	debug(x,y,X,Y);
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

