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
#include "../util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<vi> adj(n+1);
	vi ind(n+1, 0);
	vi dist(n+1, -1);
	for(int i = 0; i < m; i++)
	{
		int x, y; cin>>x>>y;
		adj[x].push_back(y);
		ind[y]++;
	}
	queue<int> Q;
	for(int i = 1; i <= n; i++) if(ind[i]==0) Q.push(i), dist[i]=0;

	while(!Q.empty())
	{
		int T = Q.front(); Q.pop();
		for(int c: adj[T])
		{
			dist[c] = max(dist[c], dist[T]+1);
			ind[c]--;
			if(ind[c]==0) Q.push(c);
		}
	}
	cout<<*max_element(all(dist))<<endl;
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

