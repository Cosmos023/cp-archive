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
	vector<int> L(n);
	for(int i = 0; i<n; i++) cin>>L[i];
	double x = 0.5;
	lli c = 0, ans=0;
	int i = 1<<n;
 	while(i--)
 	{
 		x = 0.5;
 		c=0;
 		for(int j = 0; j<n; j++)
 		{
 			double z = x;
 			if((i>>j)&1)
 			{
 				x+=L[j];
 				if((z>0 && x<0)||(z<0 && x>0)) c++;
 			}
 			else
 			{
 				x-=L[j];
 				if((z>0 && x<0)||(z<0 && x>0)) c++;
 			}
 		}
 		ans = max(ans, c);
 	}
 	cout<<ans<<"\n";
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

