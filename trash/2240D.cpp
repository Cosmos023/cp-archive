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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int n, d;
	cin >> n >> d;
	vector<lli> a(n+1,0),p(n+1,0),V(n+1,0);
	for(int i=1; i<=n; i++) cin >> a[i];
	for(int i=1; i<=n; i++) p[i] = p[i-1]+a[i];

	for(int i=1; i<=n; i++)
	{
		if(i-d>=1) V[i]-=p[i-1]-p[i-d-1];
		else
		{
			V[i]-=p[i-1]-p[0];
			int k = d-(i-1);
			V[i]-=p[n]-p[n-k];
		}
		if(i+d<=n) V[i]-=p[i+d]-p[i];
		else
		{
			V[i]-=p[n]-p[i];
			int k = d-(n-i);
			V[i]-=p[k]-p[0];
		}
		V[i]+=2*d*a[i];
	}

	sort(rall(V));
	lli ans = 0;
	for(int i = 0; i<n; i++)
	{
		if(V[i]>0) ans+=V[i];
	}
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

