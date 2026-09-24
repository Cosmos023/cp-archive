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
	string s; cin>>s;
	int n = s.size();
	cout<<1<<" "<<n<<" ";

	int p = 0; while(p<n && s[p]=='1') p++;
	if(p==n) {s[n-1]='0'; cout<<"1 1"<<endl; return;}
	string M = s;
	int sz = n-p;
	int ans = 1;
	for(int i = 0; i < n-sz+1; i++)
	{
		string t="";
		for(int j = 0; j < sz; j++) t+=s[i+j];
		string k = s;
		for(int j = 0; j<t.size(); j++) k[n-t.size()+j] = (t[j]==k[n-t.size()+j])?'0':'1';
		debug(t, k, M, M<k, i+1);
		if(M<k) ans=i+1;
		M=max(M, k);
	}
	cout<<ans<<" "<<ans+sz-1<<endl;
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

