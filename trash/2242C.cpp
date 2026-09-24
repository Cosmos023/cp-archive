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
	vector<lli> a(n);
	map<lli, lli> M;
	for(lli i=0; i<n; i++) 
	{
		cin >> a[i];
		M[a[i]]++;
	}
	multiset<lli> S;
	for(auto p:M) S.insert(p.second);
	vi V(all(S));
	debug(V);
	lli N = V.size();
	if(N==0)
	{
		cout<<"0\n"; return;
	}
	lli sum = V[N-1];
	lli ans = 0;
	for(lli i = N-2; i>=0; i--)
	{
		if(V[i]!=V[i+1])
		{
			if((k-sum)%(N-i-1)==0) ans++;
		}
		sum += V[i];
		debug(ans, sum, k, N);
	}
	if((k-sum)%(N)==0) ans++;
	cout<<ans<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	lli t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

