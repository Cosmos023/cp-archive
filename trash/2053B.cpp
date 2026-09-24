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
	vector<int> l(n), r(n);
	vector<int> c(2*n+1, 0);
	vector<int> C(2*n+1, 0);
	vector<int> p(2*n+1, 0);
	for(int i=0; i<n; i++)
	{
		cin>>l[i]>>r[i];
		if(l[i]==r[i]){ c[l[i]]=1; C[l[i]]++;}
	}
	for(int i=1; i<=2*n; i++) p[i] = p[i-1]+c[i];

	for(int i=0; i<n; i++)
	{
		if(l[i]!=r[i])
		{
			int k = r[i]-l[i]+1;
			int z = p[r[i]]-p[l[i]-1];
			cout << ((k==z)?'0':'1');
		}
		else
		{
			cout<<((C[l[i]]==1)?'1':'0');
		}
	}
	cout<<endl;
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

