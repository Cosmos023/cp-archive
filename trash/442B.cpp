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

using ld = long double;

void solve()
{
	int n;
	cin >> n;
	vector<ld> p(n);
	multiset<ld> active; 
	for(int i=0; i<n; i++) {cin >> p[i]; active.insert(p[i]);}
	ld P=1;
	ld S=0;
	
	for(int i=0; i<n; i++)
	{
		P *= (1-p[i]);
		S += p[i]/(1-p[i]);
	}
	// ld V = P*S;
	while(true)
	{
		ld K = LLONG_MIN;
		ld i = -1;
		for(ld c: active)
		{
			ld D = c/(1-c)*(S - 1/(1-c));
			if(D>=K) {i=c; K=D;}
			debug(c, D);
		}
		debug(P, S, active, i);
		if(abs(i+1)<1e-6 || K<=0)
		{
			cout<<fixed<<setprecision(15)<<P*S<<endl; return;
		}
		active.erase(active.find(i));
		P=1; S=0;
		for(ld z:active)
		{
			P *= (1-z);
			S += z/(1-z);
		}
		// V=P*S;
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

