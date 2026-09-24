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
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	vector<vector<int>> p(n+1);
 	for(int i=0; i<n; i++)
 	{
 		int a, b; cin>>a>>b;
 		p[a].push_back(b);
 		p[b].push_back(a);
 	}
 	for(int i=1; i<=n; i++)
 	{
 		if(p[i].size()!=2 || p[i][0]==i || p[i][1]==i)
 		{
 			NO; return;
 		}
 	}
 	vi visited(n+1, 0);
 	for(int i = 1; i<=n; i++)
 	{
 		if(visited[i]) continue;
 		int x = i;
 		int c = 0;
 		while(!visited[p[x][0]] || !visited[p[x][1]])
 		{
 			if(!visited[p[x][0]])
 			{
 				x=p[x][0];
 				visited[x]=1;
 			}
 			else
 			{
 				x=p[x][1];
 				visited[x]=1;
 			}
 			c++;
 		}
 		if(c%2)
 		{
 			NO; return;
 		}
 	}
 	YES;
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

