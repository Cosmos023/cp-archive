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
	ll m; cin >> m;
	vll C(30, 0);
	while(m--)
	{
		ll t, v; cin>>t>>v;
		if(t==1) C[v]++;
		else
		{
			vll D = C; ll y = 1;
			for(ll i = 30; i>=0; i--)
			{
				if((v>>i)&1)
				{
					ll k = (1LL<<i);
					ll j = i;
					while(k!=0)
					{
						if(k >= D[j]*(1LL<<j)) 
						{
							k-=D[j]*(1LL<<j);
							D[j]=0;
						}
						else
						{
							D[j]-=k/(1LL<<j); k=0;
						}
						j--;
						if(j==-1 && k!=0){y=0; break;}
					}
				}
			}
			if(y) YES; else NO;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll t=1;
	while(t--)
	{
		solve();
	}
}

