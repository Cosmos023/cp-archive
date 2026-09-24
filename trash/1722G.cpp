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
	int n;
	cin >> n;

	if(n==3)
	{
		cout<<"1 3 2\n";
		return;
	}

	vi odd, eve;
	int re = n/2;
	int ro = n-re;
	if(ro>re)
	{
		odd.push_back(0);
		ro--;
	}
	if(ro%2==0)
	{
		int k = 12;
		while(ro--)
		{
			odd.push_back(k);
			k++;
		}
		while(re--)
		{
			eve.push_back(k);
			k++;
		}
	}
	else
	{
		int k = 12;
		while(ro>3)
		{
			odd.push_back(k);
			k++;
			ro--;
		}
		while(k%4!=0) k++;
		while(re>3)
		{
			eve.push_back(k);
			k++;
			re--;
		}
		eve.push_back(1);
		eve.push_back(8);
		eve.push_back(9);
		odd.push_back(2);
		odd.push_back(5);
		odd.push_back(7);
	}
	vi ans;
	for(int i = 0; i<odd.size(); i++)
	{
		ans.push_back(odd[i]);
		if(i<eve.size()) ans.push_back(eve[i]);
	}
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
