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
	string s; cin>>s;
	int y=0, z=0, yc =0, zc = 0;; 
	for(int i = 0; i<n; i++)
	{
		if(y && s[i]=='s'){NO; return;}
		if(s[i]=='p') {y=1;}
		if(s[i]=='s') {z=1;}
	}
	if(y==0 || z==0){YES; return;}
	int k = 0;
	while(k<n && s[k]=='.') {s[k]='s'; k++;}
	int l = n-1;
	while(l>=0 && s[l]=='.') {s[l]='p'; l--;}
	
	for(int i = 0; i<n; i++)
	{
		if(s[i]=='p') {y=1; yc++;}
		if(s[i]=='s') {z=1; zc++;}
	}
	if(yc>1 && zc >1) {NO; return;}
	YES;
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

