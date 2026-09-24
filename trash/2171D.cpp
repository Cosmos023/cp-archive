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
	vector<int> a(n+1);
	vector<int> p(n+1);
	vector<int> s(n+1);
	vector<bool> d(n+1,false);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	p[1]=a[1]; s[n]=a[n];
 	for(int i=2; i<=n; i++)
 	{
 		p[i]=min(a[i],p[i-1]);
 		s[n-i+1] = max(s[n-i+2],a[n-i+1]);
 	}
 	// pL(p);pL(s);
 	for(int i=2; i<=n; i++)
 	{
 		if(p[i-1]>s[i])
 		{
 			NO; return;
 		}
 	}
 	YES;
 	for(int i=2; i<=n; i++)
 	{
 		cout<<a[i]
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
