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
	lli n, s1, s2;
	cin >> n >> s1 >> s2;
	vector<int> r(n+1);
	for(int i=0; i<n; i++) cin >> r[i+1];
	vector<pii> X;
	for(int i=0; i<n; i++)
	{
		X.push_back({r[i+1],i+1});
	}
	sort(rall(X));
	lli i=1, j=1;
	vi aI, bI;
	for(auto& [ri, id]:X)
	{
		if(ri*i*s1 < ri*j*s2)
		{
			aI.push_back(id);
			i++;
		}
		else if(ri*i*s1 > ri*j*s2)
		{
			bI.push_back(id);
			j++;
		}
		else
		{
			if(i*s1 > j*s2)
			{
				aI.push_back(id); i++;
			}
			else
			{
				bI.push_back(id); j++;
			}
		}
	}
	cout<<aI.size()<<" "; pL(aI);
	cout<<bI.size()<<" "; pL(bI);
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

