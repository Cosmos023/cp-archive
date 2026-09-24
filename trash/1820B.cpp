#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vll = vector<ll>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using ld = long double;
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

ll f(ll k, ll x)
{
	return (k+1)*(x-k);
}

void solve()
{
	string s; cin>>s;
	s+=s+'0';
	int x = 0;
	int i=0;
	while(i<s.size())
	{
		int j = i;
		while(j<s.size() && s[j]=='1') j++;
		x = max(x, j-i);
		i=j+1;
	}
	x=min(x, (int)s.size()/2);
	if(x==s.size()/2)
	{
		cout<<1LL*x*x<<endl; return;
	}
	cout<<max(f((x-1)/2, x), f(x/2, x))<<endl;
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

