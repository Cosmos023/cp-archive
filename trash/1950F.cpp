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

int lb(int x)
{
	int c = 0;
	while(x>1)
	{
		c++; x/=2;
	}
	return c;
}

void solve()
{
	int a,b,c;
	cin >> a>>b>>c;
	int z = lb(a);
	if(c!=(1+a) || c==0)
	{
		cout<<"-1\n"; return;
	}
	int k =max(0, b-((1<<(z+1))-a-1));
	int ans;
	if(k==0) ans=z+1; else
	ans = z+(k+c-1)/c+1;
	if(a==0)
	{
		ans=b+c-1;
	}
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

