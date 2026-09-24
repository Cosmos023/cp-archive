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
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";



string s;
int ans;
void dfs(int vertex, int n, vi& L, vi& R, vector<bool>& visited, vector<vector<int>>& adj)
{
	visited[vertex] = 1;
	int y = 0;
	for(int child : adj[vertex])
	{
		y=1;
		if(visited[child]) continue;
		if(s[vertex]!='L' && child==L[vertex])
		{
			dfs(child, n+1, L, R, visited, adj);
		}
		else if(s[vertex]!='R' && child==R[vertex])
		{
			dfs(child, n+1, L, R, visited, adj);
		}
		else
		{
			dfs(child, n, L, R, visited, adj);
		}
	}
	if(!y) ans = min(ans, n);
}

void solve()
{
	int n;
	cin >> n;
	vector<vector<int>> adj(n+1);
	vector<bool> visited(n+1, false);
	vi L(n+1, -1);
	vi R(n+1, -1);
	ans = INT_MAX;

	cin>>s;
	s="!"+s;
 	for(int i=1; i<=n; i++)
 	{
 		int l, r; cin>>l>>r;
 		if(l!=0)
 		{
	 		adj[i].push_back(l);
	 		L[i]=l;
	 	}
	 	if(r!=0)
 		{
	 		adj[i].push_back(r);
	 		R[i]=r;
	 	}
 	}
 	dfs(1,0, L, R, visited, adj);
 	cout<<ans<<"\n";
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

