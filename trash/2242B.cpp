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
	vector<int> a(n+1);
	vi n1(n+1,0),n2,n3;
	n2 = n1; n3=n1;
	vi K(n+1, 0);
	vi son(n+1, 0);
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
		n1[i]=n1[i-1];
		n2[i]=n2[i-1];
		n3[i]=n3[i-1];
		if(a[i]==1) n1[i]++;
		if(a[i]==2) n2[i]++;
		if(a[i]==3) n3[i]++;
	}
	for(int i=0; i<=n; i++) K[i]=2*n3[i]-i;
	int m = K[n-1];
	for(int i=n-2; i>=0; i--)
	{
		if(m<=K[i]) son[i]=1;
		m = min(K[i], m);
	}
	debug(n1,n2,n3, K, son);
	for(int i = 1; i <= n-2; i++)
	{
		if(2*n1[i]<i) continue;
		if(son[i])
		{
			YES; return;
		}
	}
	NO;
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

