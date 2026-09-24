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
	ll n, k;
	cin >> n >> k;
	ll z = k^n;
	vector<int> a(n);
	if(z==0)
	{
		YES;
		iota(rall(a), 0);
		for(ll c: a) cout<<c<<" "; cout<<endl; return;
	}
	int j = 63-__builtin_clzll(z);
	if((1LL<<j) > n-1)
	{
		NO; return;
	}
	si an;
	si nums;
	for(int i = 1; i<n; i++) nums.insert(i);
	for(int i = 0; i<63; i++)
	{
		if((z>>i)&1)
		{
			nums.erase(1<<i);
			an.insert(1<<i);
		}
	}
	YES;
	for(ll c: nums) cout<<c<<" ";
	cout<<"0 ";	
	for(ll c: an) cout<<c<<" ";
	cout<<endl;
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

