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
	string z = "";
	int m = 0; 
	while(m<n && s[m]=='0') m++;
	for(int i = m; i<n; i++) z+=s[i];
	s=z;
	n = s.size(); if(n==0){cout<<"0\n"; return;}
	vector<int> a;
	for(int i=0; i<n; i++)
	{
		if(s[i]=='0') a.push_back(i);
	}
	if(a.size()==0)
	{
		cout<<s<<endl; return;
	}
	int k = a[0];
	int sz = n-k;
	vi ans;
	for(int i = 0; i<=n-sz; i++)
	{
		vi Z;
		for(int j = i; j<i+sz; j++)
		{
			if(s[j]=='1')
			{
				if(binary_search(all(a), j+a[0]-i)) Z.push_back(j+a[0]-i);
			}
		}
		if(ans.empty()) ans=Z;
		int r = 0;
		while(r<min(Z.size(), ans.size()) && Z[r]==ans[r]) r++;
		if(r==Z.size()) continue;
		else if(r==ans.size()) ans=Z;
		else {
			if(ans[r]>Z[r]) ans=Z;
		}
	}
	debug(ans);
	for(int c:ans) s[c]='1';
	cout<<s<<endl;
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

