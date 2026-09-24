#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ld = long double;
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
	int n,m,x; cin>>n>>m>>x; x--;
	int J = x;
	vi Z;
	for(int i = 0; i < m; i++)
	{
		int r; cin>>r; char c; cin>>c;
		if(c=='0') J+=r;
		else if(c=='1') J-=r;
		else Z.push_back(r);
		J = (J+n)%n;
	}
	vi ol(n, 0);
	ol[0]=1;
	for(int z:Z)
	{
		vi ne(n, 0);
		for(int i = 0; i < n; i++)
		{
			if(ol[(i-z+n)%n] || ol[(i+z)%n]) ne[i]=1;
		}
		ol=ne;
	}
	cout<<accumulate(all(ol), 0)<<endl;
	vi ans;
	for(int i = 0; i < n; i++)
	{
		if(ol[i])
		{
			ans.push_back((J+i)%n+1);
		}
	}
	sor(ans); pL(ans);
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

