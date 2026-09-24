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
	int n, m, k;
	cin >> n >> m >> k;
	vector<pii> A;
	int p = 0;
	for(int i = 1; i<=n; i++)
	{
		vector<pii> B;
		for(int j = 1; j<=m; j++)
		{
			B.push_back({i,j});
		}
		if(p) reverse(all(B));
		p=1-p;
		A.insert(A.end(), all(B));
	}
	vector<pair<pii,pii>> Z;
	while(Z.size()!=k-1)
	{
		pair<pii,pii> P;
		P.first = A.back(); A.pop_back();
		P.second = A.back(); A.pop_back();
		Z.push_back(P);
	}
	cout<<A.size()<<" ";
	for(auto p:A)
	{
		cout<<p.first<<" "<<p.second<<" ";
	}
	cout<<endl;
	for(auto p:Z)
	{
		cout<<"2 "<<p.first.first<<" "<<p.first.second<<" "<<p.second.first<<" "<<p.second.second<<endl;
	}
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

