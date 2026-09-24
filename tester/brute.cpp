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

vector<vll> V;
struct sybau
{
	bool operator()(ll a, ll b) const
	{
		ll la = V[a].size()-1;
		ll lb = V[b].size()-1;
		while(la>=0 && lb>=0 && V[a][la]==V[b][lb]) {la--; lb--;}
		if(la==-1) return false;
		if(lb==-1) return true;
		return V[a][la] > V[b][lb];
	}
};

void solve()
{
	ll x, k; cin>>x>>k;
	set<ll, sybau> S;
	ll C=0;
	for(int i = 0; i < k; i++)
	{
		ll l; cin>>l; C+=l;
		vll Z;
		while(l--)
		{
			ll z; cin>>z; Z.push_back(z);
		}
		reverse(all(Z));
		V.push_back(Z);
		S.insert(i);
	}
	ll ans = x;
	while(C--)
	{
		for(int i = 0; i < k; i++)
		{
				
		}
	}
	cout<<ans<<endl;
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

