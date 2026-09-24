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
	int n, m, q;
	cin >> n >> m >> q;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	a.push_back(-1);
	map<int,int> M;
	int F = 0;
	int z=0;
	for(int i=1; i<=n; i++)
	{
		if(a[i]==a[i-1]+1) continue;
		if(z<i-F)
		{
			M[i-F]=a[F]-1;
			z=i-F;
		}
		F=i;
	debug(M, i, F);
	}
	set<pii> S; for(auto p:M)S.insert(p);
	while(q--)
	{
		int k; cin>>k;
		auto it = S.lower_bound({k, -1});
		if(it==S.end())
		{
			cout<<m<<" "; continue;
		}
		cout<<(it->second)<<" ";
	}
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

