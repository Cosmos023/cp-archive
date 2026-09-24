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
	map<int, int>	M;
	for(int i=0; i<n; i++) 
	{
		cin >> a[i];
		M[a[i]]++;
	}
	int i = 0;
	int mex1 = 0, mex2 = 0;
	int k = 1;
	while(true)
	{
		if(k && M[i]>=2)
		{
			mex1++;
			mex2++;
		}
		else
		{
			k = 0;
			if(M[i]>=1) mex1++;
			else break;
		}
		i++;
		debug(i, mex1, mex2);
	}
	debug(M);
	cout<<mex1+mex2<<endl;
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

