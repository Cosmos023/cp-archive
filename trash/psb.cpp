#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
	ll n; cin>>n;
	vector<ll> a(n,0);
	for(int i = 0; i<n; i++) cin>>a[i];
	a.push_back(-1);
	int i = 0;
	vector<pair<ll, pair<ll, ll>>> M;
	while(i<n)
	{
		int j = i+1;
		while(a[j]>a[j-1]) j++;
		M.push_back({j-i, {a[i], a[j-1]}});
		i=j;
		cerr<<M.back().first<<" "<<endl;
	}
	ll ans = M[0].first;
	for(int k = 1; k<M.size(); k++)
	{
		ans = max(ans, M[k].first);
	}
}