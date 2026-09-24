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
	vector<int> a(n+1);
	for(int i=0; i<n; i++) cin >> a[i+1];
	int zO = 0, zE=0;
	vi vO, vE;
	for(int i=1; i<=n; i++)
	{
		if(i%2)
		{
			if(a[i]==0) zO++;
			else vO.push_back(a[i]);
		}
		else
		{
			if(a[i]==0) zE++;
			else vE.push_back(a[i]);
		}
	}
	if(!is_sorted(all(vO)) || !is_sorted(all(vE))){NO; return;}
	vi P;
	for(int c: vE) P.push_back(c);
	for(int c: vO) P.push_back(c);
	sor(P);
	vi ans;
	multiset<int> E(all(vE));
	multiset<int> O(all(vO));
	int k = 1;
	for(int c:P)
	{
		if(k%2)
		{
			if(O.find(c)!=O.end())
			{
				O.erase(O.find(c));
				ans.push_back(c);
			}
			else
			{
				if(zO<=0) {NO;return;}
				zO--;
				k++;
			}
		}
		else
		{
			if(E.find(c)!=E.end())
			{
				E.erase(E.find(c));
				ans.push_back(c);
			}
			else
			{
				if(zE<=0) {NO;return;}
				zE--;
				k++;
			}
		}
		k++;
	}
	if(is_sorted(all(ans))) YES; else NO;
	debug(ans);
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

