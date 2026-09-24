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
	lli px,py,qx,qy; cin>>px>>py>>qx>>qy;
	double s=0;
	double M = 0;
 	for(int i=0; i<n; i++)
 	{
 		double x; cin>>x; s+=x;
 		M=max(M,x);
 	}
 	double d = sqrt((px-qx)*(px-qx)+(py-qy)*(py-qy));
 	s+=d;
 	M = max(M, d);
 	if(2*M<=s)
 	{
 		YES;
 	}
 	else
 	{
 		NO;
 	}
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
