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
	ll n, m;
	cin >> n >> m;
	vector<int> sgn(n+1, 0);
	vector<vi> A(n+1, vi(n+1, 0));
	vector<vi> adj(n+1);
	for(int k = 0; k < m; k++)
	{
		int o, i, j; cin>>o>>i>>j;
		A[i][j]=o;
	}
	for(int i = 1; i <= n; i++) if(A[i][i]==1) sgn[i]=1; else sgn[i]=-1;

	for(int i = 1; i<=n; i++)
	{
		for(int j = i+1; j<=n; j++)
		{
			int o = A[i][j];
			if(o==0) o = A[j][i];
			if(sgn[i]==sgn[j])
			{
				if(o==1 && sgn[i]==-1) {NO; return;}
				if(o==2 && sgn[i]==1) {NO; return;}
				continue;
			}
			if(o==1)
			{
				if(sgn[i]==1) adj[j].push_back(i);
				else adj[i].push_back(j);
			}
			else
			{
				if(sgn[i]==-1) adj[j].push_back(i);
				else adj[i].push_back(j);
			}
		}
	}
	vi ind(n+1, 0);
	for(int i = 1; i <= n; i++) for(int c:adj[i]) ind[c]++;
	queue<int> Q;
	for(int i = 1; i <= n; i++) if(ind[i]==0) Q.push(i);
	vi res;
	while(!Q.empty())
	{
		int T = Q.front(); Q.pop();
		res.push_back(T);
		for(int c:adj[T])
		{
			ind[c]--;
			if(ind[c]==0) Q.push(c);
		}
	}
	debug(res, adj);
	if(res.size()<n) {NO; return;}
	YES;
	vi ans = sgn;
	int k = 1;
	for(int c: res)
	{
		ans[c]*=k; k++;
	}
	pL1(ans, n);
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

