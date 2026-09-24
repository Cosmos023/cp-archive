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
#define YES cout<<"Yes\n";
#define NO cout<<"No\n";

vector<bool> y(220, false);
void pc()
{
	for(int i = 1; i<=6; i++)
	for(int j = 1; j<=6; j++)
	for(int k = 1; k<=6; k++)
	y[i+j+k]=true;
}
void solve()
{
	int x; cin>>x;
	if(y[x])
	{
		YES;
	}
	else
		NO;
}

int main()
{
	pc();
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

