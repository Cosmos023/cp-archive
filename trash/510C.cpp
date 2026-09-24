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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

bool cycle(int v, vector<vi>& ch, vi& done)
{
	done[v]=1;
	int cyc = 0;
	for(int c:ch[v])
	{
		if(done[c]) return true;
		cyc|=cycle(c,ch,done);
	}
	return cyc;
}

void solve()
{
	int n;
	cin >> n;
	vector<string> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	vector<vi> adj(26);
	for(int i=0; i<n-1; i++)
	{
		int k = 0; int y=0;
		while(a[i][k]==a[i+1][k])
		{
			k++;
			if(k==min(a[i].size(), a[i+1].size()))
			{
				if(a[i].size() > a[i+1].size())
				{
					cout<<"Impossible"; return;
				}
				y=1;
				break;
			}
		}
		if(y) continue;
		int s = a[i+1][k];
		int p = a[i][k];
		adj[p-'a'].push_back(s-'a');
	}
	vi ind(26, 0);
	for(int i=0; i<26; i++)
	{
		for(int ch:adj[i])
			ind[ch]++;
	}
	queue<int> Q;
	for(int i=0; i<26; i++) if(ind[i]==0) Q.push(i);
	vi ans;
	while(!Q.empty())
	{	
		int T = Q.front(); Q.pop();
		ans.push_back(T);
		for(int ch:adj[T])
		{
			ind[ch]--;
			if(ind[ch]==0) Q.push(ch);
		}
	}
	debug(ind,adj,ans);
	if(ans.size()==26)
	{
		for(int i = 0; i < 26; i++) cout<<(char)(ans[i]+'a');
	}
	else cout<<"Impossible";
	// vi done(26,0);
	// for(int i = 0; i < 26; i++)
	// {
	// 	if(!done[i]) 
	// 	{}
	// 		if(cycle(i, ch, done))
	// 		{
	// 			cout<<"Impossible";
	// 			debug(done, (char)(i+'a'));
	// 		}
	// 	}
	// }
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

