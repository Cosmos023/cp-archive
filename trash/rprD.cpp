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
	lli n, k;
	cin >> n >> k;
	if(__builtin_popcount(n)>k)
	{
		NO; return;
	}
	multiset<int> ms;
	for(int i = 30; i>=0; i--)
	{
		if((n>>i)&1) ms.insert(i);
	}
	while(ms.size()!=k)
	{
		int c = *ms.rbegin();
		if(c==0)
		{
			NO; return;
		}
		ms.erase(ms.find(c));
		ms.insert(c-1);
		ms.insert(c-1);
	}
	YES;
	for(int c : ms)
	{
		cout<<(1<<c)<<" ";
	}
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

