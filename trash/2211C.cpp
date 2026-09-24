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
	for(int c:as)
	{
		if(bs.find(c)==bs.end())
		{
			ds.insert(c);
		}
	}
			// cout<<y<<"c\n";
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
 		// cout<<"n";
 		NO; return;
 	}
 	map<int, int> m;
 	for(int c: b)
 	{
 		if(c!=-1)
 		{
	 		if(m[c]==0)
	 		{
	 			m[c]++;
	 		}
	 		else
	 		{
	 			NO; return;
	 		}
	 	}
 	}
 	for(int i = k+1; i<=n; i++)
 	{
 		if(b[i]!=-1)
 		{
 			if(b[i]!=a[i])
 			{
 				NO; return;
 			}
 		}
 		if(b[i-k]!=-1)
 		{
 			if(b[i-k]!=a[i-k])
 			{
 				NO; return;
 			}
 		}
 	}


 	// for(int i = k+1; i<=n; i++)
 	// {
 	// 	if(b[i-k]!=-1)
 	// 	{
 	// 		as.erase(a[i-k]);
 	// 		bs.erase(b[i-k]);
 	// 		as.insert(a[i]);
 	// 		if(b[i]!=-1)
 	// 		{
	//  			if(as.find(b[i])==as.end())
	//  			{
	//  				NO; return;
	//  			}	
	//  			else
	//  			{
	//  				bs.insert(b[i]);
	//  			}
 	// 		}
 	// 		else
 	// 		{
 	// 			ds.insert(a[i]);
 	// 		}
 	// 		// if(b[i]!=-1)
 	// 		// {
	//  		// 	{
	//  		// 		NO; return;
	//  		// 	}
	//  		// 	else
	//  		// 	{
	//  		// 		bs.insert(b[i]);
	//  		// 	}
	//  		// }
	//  		// else
	//  		// {

	//  		// }
 	// 	}
 	// 	else
 	// 	{
 	// 		as.erase(a[i-k]);
 	// 		bs.erase(b[i-k]);
 	// 		as.insert(a[i]);
 	// 		if(b[i]!=-1)
 	// 		{
	//  			if(as.find(b[i])==as.end())
	//  			{
	//  				NO; return;
	//  			}	
	//  			else
	//  			{
	//  				bs.insert(b[i]);
	//  			}
 	// 		}
 	// 		else
 	// 		{
 	// 			ds.insert(a[i]);
 	// 		}
 	// 	}

 	// }
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

