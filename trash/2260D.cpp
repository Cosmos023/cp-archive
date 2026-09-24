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
	int n; cin>>n;
	string s; cin>>s;
	int i = 0;
	vi X;
	int ans = 1;
	while(i < n)
	{
		if(s[i]=='0') {i++; X.clear();}
		int j = i+1;
		while(j<n && s[j]==s[i]) j++;
		X.push_back(j-i);
		i=j;
		if(s[i]=='0' || j==n)
		{
		debug(X);
			debug("HI");
			int k=1;
			for(int w = 0; w<X.size(); w++)
			{
				int x = X[w];
				if(x==1) k=1;
				else if(x%2==0 && w!=X.size()-1) k=3;
				else if(x%2==0) k=2;
				else k = 2;
				ans = max(ans, k);
			}
			X.clear();
		}
	}
	cout<<ans<<endl;
	// vector<ll> a(n+1,0);
	// vector<ll> Z(n+1,0);
	// ll C = 0;
	// for(int i = 1; i <= n; i++)
	// {
	// 	if(s[i]=='0')
	// 	{
	// 		if(C==0) {cout<<"-1\n"; return;}
	// 		a[i]=-C;
	// 		C=0;
	// 		continue;
	// 	}
	// 	if(s[i]=='+')
	// 	{
	// 		if(C!=1)
	// 		{
	// 			a[i]=-C+1;
	// 			C=1;
	// 		}
	// 		else
	// 		{
	// 			a[i] = -C+2;
	// 			C=2;
	// 		}
	// 	}
	// 	else
	// 	{
	// 		if(C!=-1)
	// 		{
	// 			a[i]=-C-1;
	// 			C=-1;
	// 		}
	// 		else
	// 		{
	// 			a[i] = -C-2;
	// 			C=-2;
	// 		}
	// 	}
	// }
	// for(int i = 1; i <= n; i++)
	// {
	// 	Z[i]=abs(a[i]);
	// }
	// cout<<*max_element(all(Z))<<endl;
	// // cout<<C<<endl;
	// // pL1(a, n);
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

