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
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	map<int, int> M;
	int Mx=0;
	int k = 0;
	for(int i = 0; i < n; i++)
	{
		M[a[i]] = M[a[i]-1] + 1;
		if(Mx < M[a[i]])
		{
			Mx = M[a[i]];
			k = a[i];
		}
	}
	cout<<Mx<<endl;
	vi ans;
	for(int i = n-1; i >= 0; i--)
	{
		if(a[i]==k)
		{
			ans.push_back(i+1); k--;
		}
	}
	reverse(all(ans));
	pL(ans);
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

