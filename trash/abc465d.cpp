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
	lli X,Y,K;
	cin >> X>>Y>>K;
	lli ans = 0;
	set<lli> se,xy;
	se.insert(X);
	xy.insert(Y);
	while(X!=0)
	{
		X/=K;
		se.insert(X);
	}
	while(Y!=0)
	{
		Y/=K;
		xy.insert(Y);
	}
	int p = 0;
	for(auto it = se.rbegin(); it!=se.rend(); it++)
	{
		if(xy.find(*it)!=xy.end())
		{
			ans+=p;
			for(auto jt = xy.rbegin(); jt!=xy.rend(); jt++)
			{
				if(*jt==*it)
				{
					cout<<ans<<endl;
					return;
				}
				ans++;
			}
		}
		p++;
	}
	debug(se,xy);
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

