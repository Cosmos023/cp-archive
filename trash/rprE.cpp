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

int check(lli a, lli b)
{
	string A = to_string(a);
	string B = to_string(b);
	if(B.size()>A.size()) return -1;
	int i;
	for(i=B.size()-1; i>=0; i--)
	{
		if(B[i]!=A[i])
		{
			return -1;
		}
	}
	return A.size()-B.size();
}

void solve()
{
	lli a, b;
	cin >> a >> b;
	int n = 0;
	lli p = log10(b)+1; debug(p);
	lli z = a%(lli)pow(10,p);
	if((b-a))
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

