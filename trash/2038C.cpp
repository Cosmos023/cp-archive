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
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> m;
	for(int i=0; i<n; i++) {cin >> a[i]; m[a[i]]++;}
	multiset<int> s;
	for(auto [v, c]:m)
	{
		int k = c/2;
		while(k--) s.insert(v);
	}
	if(s.size()<4){NO; return;} YES;
	int A = *s.begin();
	int B = *++s.begin();
	int C = *++s.rbegin();
	int D = *s.rbegin();
	// cout<<(D-B)*(C-A)<<endl;
	cout<<A<<" "<<B<<" "<<A<<" "<<D<<" "
			<<C<<" "<<B<<" "<<C<<" "<<D<<endl;
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

