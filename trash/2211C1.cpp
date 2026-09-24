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


bool subset(si& as, si& bs, si& ds)
{
	int y = 1;
	for(int c:bs)
	{
		if(as.find(c)==as.end())
		{
			y=0;
		}
	}
	if(y)
		return true;
	else
		return false;
}

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n+1);
	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
	vector<int> b(n+1);
 	for(int i=1; i<=n; i++) cin>>b[i];

 	si as, bs, ds;
 	int d = 0;
 	for(int i = 1; i<=k; i++)
 	{
 		as.insert(a[i]);
 		if(b[i]!=-1)
 		{
 			bs.insert(b[i]);
 		}
 		else d++;
 	}
 	if(!subset(as, bs, ds))
 	{
 		NO; return;
 	}
 	// map<int, int> m;
 	si s;
 	for(int c: b)
 	{
 		if(c!=-1)
 		{
	 		if(s.find(c)==s.end())
	 		{
	 			s.insert(c);
	 		}
	 		else
	 		{
	 			NO; return;
	 		}
	 	}
 	}
 	for(int i=k+1; i<=n; i++)
 	{
 		if(b[i]!=-1 && b[i]!=a[i])
 		{
 			NO; return;
 		}
 		if(b[i-k]!=-1 && b[i-k]!=a[i-k])
 		{
 			NO; return;
 		}
 		bs.erase(b[i-k]);
 		if(bs.find(a[i-k])!=bs.end())
 		{
 			NO; return;
 		}
 		bs.insert(b[i]);
 	}
 	YES;
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

