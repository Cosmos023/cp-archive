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

void solve()
{
	int n,m;
	cin >> n>>m;
	int i1, g1;
	vi i(m);
	vi g(m);
	vector<pii> ig;
	int k = -1;
	int o = -1;
	for(int j = 0; j<m; j++)
	{
		cin>>i[j]>>g[j];
		ig.push_back({i[j],g[j]});
		
	}
	sor(ig);
	for(int j = 0; j<m; j++)
	{
		i[j]=ig[j].first;
		g[j]=ig[j].second;
		if(k==-1 && g[j]==1)
		{
			k = j;
		}
		if(k==-1 && i[j]%2)
		{
			o = j;
		}
	}
	bool y = true;
	// cout<<k<<"k\n";
	for(int j = k+1; j<m; j++)
	{
		if((i[j]-i[j-1])%2 && g[j]==g[j-1])
		{
			y = false;
			break;
		}
		if((i[j]-i[j-1])%2==0 && g[j]!=g[j-1])
		{
			y = false;
			break;
		}
	}
	
	if(y)
	{
		// cout<<k<<"k\n";
		if(k!=0)
		{
			lli ans = (i[k]-i[k-1]+1)/2;
			int M = -1;
			for(int j = k-2; j>=0;j--)
			{
				if(i[j+1]%2==i[k-1]%2)
				{
					ans+=(i[k-1]-i[j])/2;
					M = j;
					break;
				}
			}
			// if(M==-1 && i[k-1]%2==0)
			// 	ans+=(i[k-1])/2;
			cout<<ans<<"\n";
		}
		else
			cout<<(i[k]+1)/2<<"\n";
	}
	else
		cout<<"0\n";
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

