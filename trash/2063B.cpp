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
	int n,l,r;
	cin >> n >> l >> r;
	vector<int> a(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	vi b = a;
	sort(b.begin()+1, b.begin()+r+1);
	sort(a.begin()+l, a.end());
	lli A1 = accumulate(b.begin()+1,b.begin()+(r-l+1)+1, 0LL);
	lli A2 = accumulate(a.begin()+l,a.begin()+r+1, 0LL);
	cout<<min(A1,A2)<<endl;
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

