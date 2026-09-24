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
	int n, x, y;
	cin >> n >> x >> y;
	vector<int> a(n+1, -1);
	for(int i = 1; i<n; i+=2) {a[i]=0; a[i+1]=1;} if(n%2) a[n]=0;
	if(n%2)
	{
		if(abs(x-y)%2) a[n]=2;
		else
		{
			a.insert(a.begin()+x, 2); a.pop_back();
		}
	}
	else
	{
		if(abs(x-y)%2==0)
		{
			if(a[x]==0) a[x]=2;
			else
			{
				a.erase(a.begin()); a.push_back(0); a[x]=2;
			}
		}
	}
	pL1(a, n);
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

