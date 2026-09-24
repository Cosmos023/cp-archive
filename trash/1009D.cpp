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
	lli n,m;
	cin >> n>>m;
	if(m<n-1)
	{
		cout<<"Impossible\n"; return;
	}

	lli c = 0;
	vector<pll> ans;
	for(int i = 2; i<=n; i++)
	{
		ans.push_back({1, i});
		// cout<<ans.size()<<" "<<n<<"\n";
	}
	c = n-1;
	lli k = 2;
	while(c<m && k<=n)
	{
		int y = 0;
		for(lli j = k+1; j<=n; j++)
		{
			if(gcd(k, j)==1)
			{
				ans.push_back({k, j});
				c++;
			}	
			if(c>=m)
			{
				y=1; break;
			}
		}	
		if(y) break;
		k++;
	}

	if(k>n)
	{
		cout<<"Impossible\n"; return;
	}
	else
	{
		cout<<"Possible\n"; 
		for(auto& p:ans)
		{
			cout<<p.first<<" "<<p.second<<"\n";
		}
	}
	// lli c = n-1;
	// lli k = 1;
	// while(c<=m)
	// {
	// 	k++;
	// 	c+=(n-k+1-(n/k));
	// }
	// c-=(n-k+1-(n/k))l;
	// k--;
	// if(k>n)
	// {
	// 	cout<<"Impossible\n"; return;
	// }

	// for(int i = 2; i<=n; i++)
	// {
	// 	cout<<"1 "<<i<<"\n";
	// }
	// for(lli i = 2; i<=k; i++)
	// {
	// 	for(lli j = 2*i; j<=n; j++)
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

