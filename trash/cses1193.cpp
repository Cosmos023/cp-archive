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

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<string> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	vector<vector<bool>> vis(n, vector<bool>(m, 0));
	vector<vector<int>> ans(n, vector<int>(m, INT_MAX));
	vector<vector<pii>> par(n, vector<pii>(m));
	int x=-1, y=-1;
	int P=-1, Q=-1;
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			if(a[i][j]=='#') vis[i][j]=1;
			if(a[i][j]=='A') {x=i;y=j;}
			if(a[i][j]=='B') {P=i;Q=j;}
		}
	}
	ans[x][y]=0;
	par[x][y]={-1,-1};
	queue<pii> q;
	q.push({x,y});
	vis[x][y]=1;
	while(!q.empty())
	{
		pii t = q.front();
		q.pop();
		vector<pii> delta = {{0,1},{1,0},{-1,0},{0,-1}};
		for(pii d:delta)
		{
			int nx = t.first+d.first;
			int ny = t.second+d.second;
			if(nx<n && nx>=0 && ny>=0 && ny<m && !vis[nx][ny])
			{
				vis[nx][ny]=1;
				ans[nx][ny]=1+ans[t.first][t.second];
				par[nx][ny]=t;
				q.push({nx,ny});
			}
		}
	}
	debug(par);
	if(vis[P][Q])
	{
		YES;
		cout<<ans[P][Q]<<endl;
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
			debug(P,Q);
		}
		reverse(all(an));
		pL(an);
	}
	else
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

