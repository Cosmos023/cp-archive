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

pair<lli,lli> maxp(pair<lli,lli> p, pair<lli,lli> q)
{
	if(p.first+p.second>q.first+q.second) return p; else return q;
}

void solve()
{
	int n;
	cin >> n;
	vector<lli> a1(n+1,0);
	vector<lli> a2(n+1,0);
	vector<lli> m1(n+1,1);
	vector<lli> m2(n+1,1);
 	for(int i=1; i<=n; i++)
 	{
 		char z; int x;
 		cin >> z >> x;
 		if(z=='+')a1[i]=x; else m1[i]=x;
 		cin >> z >> x;
 		if(z=='+')a2[i]=x; else m2[i]=x;
 	}
 	pair<lli,lli> dp[n+1][4];
 	cout<<ans<<endl;
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

