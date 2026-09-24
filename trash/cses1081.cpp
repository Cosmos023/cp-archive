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
	for(int i=0; i<n; i++) cin >> a[i];
	vector<vi> divisors(1000001);
	for(int i=1; i<=1000000; i++)
	{
		for(int j = i; j<=1000000; j+=i)
		{
			divisors[j].push_back(i);
		}
	}
	vi count(1000001, 0);
	// for(int i = 0; i < n; i++)
	// {
	// 	for(int c: divisors[a[i]]) count[c]++;
	// }
	// for(int i = 1000000; i > 0; i--)
	// {
	// 	if(count[i]>1)
	// 	{
	// 		cout<<i<<endl; return;
	// 	}
	// }
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

