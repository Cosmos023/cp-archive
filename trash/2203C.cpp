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
	lli s, m;
	cin >> s >> m;
	vi mb;
	for(int i=62; i>=0; i--) if((m>>i)&1) mb.push_back(i);
	int n = mb.size(); int k = 0;
	vll ans(64, 0);
	for(int i=62; i>=0; i--)
	{
		if(!((s>>i)&1)) continue;
		if(i<mb.back())
		{
			cout<<-1<<endl; return;
		}
		int k = 0;
		lli M = LLONG_MAX;
		for(int j = 0; j<n; j++)
		{
			if(mb[j]>i) continue;
			ans[mb[j]]+=(1LL<<(i-mb[j]));
			if(*max_element(all(ans))<=M)
			{
				M = *max_element(all(ans));
				k=j;
			}
			ans[mb[j]]-=(1LL<<(i-mb[j]));
		}
		ans[mb[k]]+=(1LL<<(i-mb[k]));
		debug(ans, mb[k]);
	}
	debug(mb);
	cout<<*max_element(all(ans))<<endl;
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

