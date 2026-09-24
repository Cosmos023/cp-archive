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

pair<bool,double> check(double m, vll& x, vll& t)
{
	double l = x[0]-m+t[0], r = x[0]+m-t[0];
	for(int i = 1; i<x.size(); i++)
	{
		l = max(l, x[i]-m+t[i]);
		r = min(r, x[i]+m-t[i]);
		if(l>r && abs(l-r)>=1e-9) return {false,-1};
	}
	// cerr<<(l+r)/2<<endl;
	return {true,(l+r)/2};
}

void solve()
{
	int n;
	cin >> n;
	vll x(n), t(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> x[i];
 	}
 	for(int i=0; i<n; i++) cin>>t[i];
 	double l = 0, r = 2e8;
 	// for(int i=0; i<n; i++)
 	// {
 	// 	r+=t[i]+x[i];
 	// }
 	double m;
 	double k=r;
 	while(abs(l-r)>1e-7)
 	{
 		m = (l+r)/2;
 		if(check(m, x, t).first)
 		{
 			k=m;
 			r = m;
 	// cerr<<m<<" "<<l<<" "<<r<<"\n";
 		}
 		else
 		{
 			l = m;
 		}
 	}

 	cout<<fixed<<setprecision(15)<<check(k, x, t).second<<"\n";
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

