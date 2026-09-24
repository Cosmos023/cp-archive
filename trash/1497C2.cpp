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
	ll n, k;
	cin >> n >> k;
	if(n%2 == k%2)
	{
		for(int i = 0; i < k-2; i++)
		{
			cout<<"1 ";
		}
		cout<<(n-k)/2+1<<" "<<(n-k)/2+1<<endl;
	}
	else
	{
		for(int i = 0; i < k-3; i++) cout<<"1 ";
		n-=(k-3);
		if(n%4!=0)
			cout<<"2 "<<(n-2)/2<<" "<<(n-2)/2N;
		else cout<<n/2<<" "<<n/4<<" "<<n/4;
		cout<<endl;
	}
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

