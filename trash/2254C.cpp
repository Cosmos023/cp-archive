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
	int n;
	cin >> n;
	string a, b; cin>>a>>b;
	int a1, b1; a1=b1=0;
	vi A,B;
	for(int i = 0; i < n; i+=2)
	{
		if(a[i]=='1') {a1++;A.push_back(i);}
		if(b[i]=='1') {b1++;B.push_back(i);}
	}
	if(a1!=b1){cout<<"-1\n"; return;}
	ll z=0;
	for(int i = 0; i < A.size(); i++)
	{
		z+=abs(A[i]-B[i]);
	}
	a1=b1=0;
	A.clear(); B.clear();
	for(int i = 1; i < n; i+=2)
	{
		if(a[i]=='1') {a1++;A.push_back(i);}
		if(b[i]=='1') {b1++;B.push_back(i);}
	}
	if(a1!=b1){cout<<"-1\n"; return;}
	for(int i = 0; i < A.size(); i++)
	{
		z+=abs(A[i]-B[i]);
	}
	debug(B);
	cout<<z/2<<endl;
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

