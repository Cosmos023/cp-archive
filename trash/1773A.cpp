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
	int n;
	cin >> n;
	vector<int> a(n+1), L(n+1);
	for(int i=0; i<n; i++) {cin >> a[i+1]; L[a[i+1]]=i+1;}
	vi Z(n+1, 0);
	iota(Z.begin()+1,Z.end(),1);
	std::random_device rd;
  std::mt19937 g(rd());
	for(int k = 0; k < 100; k++)
	{
  	std::shuffle(Z.begin()+1, Z.end(), g);
  	int y = 1;
  	for(int i = 1; i <= n; i++)
  	{
  		if(i==Z[i] || Z[i]==L[i]) {y=0; break;}
  	}
  	if(y) continue;
  	vi Q(n+1);
  	for(int i = 1; i <= n; i++)
  	{
  		Q[Z[i]] = L[i];
  	}
  	pL(Z);
  	pL(Q);
  	break;
	}
	cout<<"-1"<<endl;
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

