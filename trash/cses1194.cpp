#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<""; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void path(int P, int Q, vector<vector<pii>>& par, vector<vi>& distA)
{
	YES;
	cout<<distA[P][Q]<<endl;
	vector<char> an;
	while(par[P][Q]!=make_pair(-1,-1))
	{
		int nP = par[P][Q].first;
		int nQ = par[P][Q].second;
		if(nP>P) an.push_back('U');
		if(nP<P) an.push_back('D');
		if(nQ<Q) an.push_back('R');
		if(nQ>Q) an.push_back('L');
		P=nP; Q=nQ;
	}
	reverse(all(an));
	pL(an);
}

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<string> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	vector<vector<bool>> vis(n, vector<bool>(m, false));
	vector<vector<bool>> visA(n, vector<bool>(m, false));
	vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
	vector<vector<int>> distA(n, vector<int>(m, INT_MAX));
	vector<vector<pii>> par(n, vector<pii>(m));
	vector<pii> Ms;
	int P,Q;
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			if(a[i][j]=='#') {visA[i][j]=vis[i][j]=1;}
			if(a[i][j]=='M') Ms.push_back({i,j}); 
			if(a[i][j]=='A') {P=i; Q=j;} 
		}
	}
	queue<pii> q;
	for(pii c: Ms) {q.push(c); vis[c.first][c.second]=1; dist[c.first][c.second]=0;}
	while(!q.empty())
	{
		pii t = q.front(); q.pop();
		vector<pii> delta = {{0,1},{1,0},{-1,0},{0,-1}};
		for(pii d:delta)
		{
			int nx = t.first+d.first;
			int ny = t.second+d.second;
			if(nx<n && nx>=0 && ny>=0 && ny<m && !vis[nx][ny])
			{
				vis[nx][ny]=1;
				dist[nx][ny]=1+dist[t.first][t.second];
				q.push({nx,ny});
			}
		}
	}
	debug(dist);

	q.push({P,Q});
	visA[P][Q]=1;
	distA[P][Q]=0;
	par[P][Q]={-1,-1};
	while(!q.empty())
	{
		pii t = q.front(); q.pop();
		vector<pii> delta = {{0,1},{1,0},{-1,0},{0,-1}};
		for(pii d:delta)
		{
			int nx = t.first+d.first;
			int ny = t.second+d.second;
			if(nx<n && nx>=0 && ny>=0 && ny<m && !visA[nx][ny])
			{
				visA[nx][ny]=1;
				distA[nx][ny]=1+distA[t.first][t.second];
				par[nx][ny]=t;
				q.push({nx,ny});
			}
		}
	}
	for(int i = 0; i<n; i++)
	{
		if(distA[i][0]<dist[i][0])
		{
			path(i, 0, par, distA);
			return;
		}
		if(distA[i][m-1]<dist[i][m-1])
		{
			path(i, m-1, par, distA);
			return;
		}
		debug(dist[i][m-1], i);
	}
	for(int i = 0; i<m; i++)
	{
		if(distA[0][i]<dist[0][i])
		{
			path(0, i, par, distA);
			return;
		}
		if(distA[n-1][i]<dist[n-1][i])
		{
			path(n-1, i, par, distA);
			return;
		}
	}
	NO;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

