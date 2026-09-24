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
	int n, k;
	cin >> n >> k;
	k--;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	int p = -1;
	for(int i=0; i<n; i++) if(a[i]>a[k]){p=i; break;}
	int E = 0;
	if(p==-1) E=n-1;
	else if(p<k) 
	{
		E=p-1;
		swap(a[p], a[k]);
		int X = p+1;
		while(X<n && a[p]>a[X]) X++;
		if(p==0)X--;
		E = max(E, X-p);
	}
	else E=p-1;
	cout<<E<<endl;
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

