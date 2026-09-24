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

int fact(int n)
{
	if(n==1) return 1;
	return n*fact(n-1);
	debug("ho");
}

int les(vi& p, int n)
{
	// si Z; for(int i = 1; i<=n; i++) Z.insert(i);
	int ans = 0;
	debug(p, n);
	for(int i = 0; i<n; i++)
	{
		int c=0;
		for(int j = i+1; j<n; j++)
		{
			if(p[i]>p[j]) c++;
		}
		ans += c*fact(n-i-1);
	}
	debug(ans);
	return ans;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> p(n), q(n);

	for(int i=0; i<n; i++) cin >> p[i];
	for(int i=0; i<n; i++) cin >> q[i];
	int k1 = 0, k2=0;
	// do
	// {
	// 	if(Z==p) break;
	// 	k1++;
	// }while(next_permutation(all(Z)));
	// sor(Z);
	// do
	// {
	// 	if(Z==q) break;
	// 	k2++;
	// }while(next_permutation(all(Z)));
	k2 = les(q, n);
	k1 = les(p, n);
	cout<<max(0, k2-k1-1)<<endl;
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

