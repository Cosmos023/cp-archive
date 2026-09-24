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

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<ll> a(n);
	map<int, vll> M;
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++)
	{
		M[a[i]%k].push_back(a[i]);
	}
	ll ans = 0;
	int c = 0;
	for(auto& [_, v]:M)
	{
		sor(v);
		debug(v);
		int N = v.size();
		if(N%2)
		{
			c++;
			if(c>1) break;
			vll P(N,0), S(N, 0);
			for(int i = 2; i < N; i+=2)
			{
				P[i]=P[i-2]+v[i-1]-v[i-2];
				S[N-i-1]=S[N-i+1]+v[N-i+1]-v[N-i];
				// debug(S);
			}
			ll z=LLONG_MAX;
			for(int i = 0; i < N; i+=2)
			{
				z = min(P[i]+S[i], z);
			// debug(z, P, S, v);
			}
			ans+=z/k;
			continue;
		}
		for(int i = 0; i < N; i+=2)
		{
			ans+=(v[i+1]-v[i])/k;
		}
	}
	debug(c);
	cout<<((c>1)?-1:ans)<<endl;
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

