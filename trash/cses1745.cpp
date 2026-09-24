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
	vector<int> a(n);
	vector<int> y(100005,0);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	for(int i=0; i<n; i++)
 	{
 		vi z = {a[i]};
		for(int j = 0; j<100005; j++)
		{
			if(y[j]) z.push_back(j+a[i]);
		}
		for(int c:z) if(c<100005) y[c]=1;
		// cout<<y[4];
			// pL(z);
 	}
 	y[0]=0;
 	cout<<accumulate(all(y),0)<<endl;
	for(int j = 1; j<100005; j++)
	{
		if(y[j]) cout<<j<<" ";
	}
	// pL1(y,100);
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

