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
	vector<vector<int>> d(3,vector<int>(7, 0));
	for(int k = 0; k<3; k++)
	{
		for(int i = 0; i<6; i++)
		{	
			int x; cin>>x;
			d[k][x]++;
		}
	}
	vi n = {4,5,6};
	double ans = 0.0;
	do
	{
		ans += d[0][n[0]]/6.0*d[1][n[1]]/6.0*d[2][n[2]]/6.0;
	}while(next_permutation(all(n)));
	cout<<fixed<<setprecision(15)<<ans<<endl;
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

