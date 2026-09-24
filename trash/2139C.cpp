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
	lli k, x;
	cin >> k>>x;
	k = pow(2, k);
	vi ans;
	if(k==x)
	{
		cout<<ans.size()<<"\n\n";
		return;
	}
	while(k!=x)
	{
		if(x<k)
		{
			x*=2;
			ans.push_back(1);
		}
		else
		{
			x = x*2-(k*2);
			ans.push_back(2);
		}
	}
	reverse(all(ans));
	cout<<ans.size()<<"\n";
	pL(ans);
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

