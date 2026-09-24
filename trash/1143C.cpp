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

vector<int> adj[100005];
bool visited[100005];
vector<int> c(100005);
vector<int> ans;

void dfs(int vertex)
{
	visited[vertex] = 1;
	bool y = true;
	int count = 0;
	int sz = ans.size();
	for(int child : adj[vertex])
	{
		
		if(visited[child]) continue;
		if(c[child]==0) y = false;
		dfs(child);
		count++;
	}
	if(y && c[vertex])
	{
		ans.push_back(vertex);
		// reverse(ans.begin()+sz, ans.begin()+sz+count);
	}
}

void solve()
{
	int n;
	cin >> n;
	int r;
 	for(int i=1; i<=n; i++)
 	{
 		int x, ci;
 		cin >> x>>ci;
 		c[i]=ci;
 		if(x==-1)
 		{
 			r=i;
 			continue;
 		}
 		adj[x].push_back(i);
 	}
 	dfs(r);
 	if(!ans.empty())
 	{
 		// reverse(all(ans));
 		sor(ans);
 		pL(ans);
 	}
 	else
 		cout<<"-1\n";
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

