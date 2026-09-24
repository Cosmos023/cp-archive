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
	string s; cin>>s;
	int n = s.size();
	int n1=0,n0=0;
	for(int i = 0; i<n; i++) if(s[i]=='0') n0++; else n1++;
	if(n0==0) {cout<<n1<<endl; return;}
	if(n1==0) {cout<<n0<<endl; return;}
	for(int i = 0; i<n; i++)
	{
		if(s[i]=='1')
		{
			if(n0<=0) {cout<<n1<<endl; return;}
			n0--;
		}
		else
		{
			if(n1<=0) {cout<<n0<<endl; return;}
			n1--;
		}
	}
	cout<<0<<endl;
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

