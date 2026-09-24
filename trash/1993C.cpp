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
	lli n,k;
	cin >> n>>k;
	vector<lli> a(n);
 	for(lli i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	sor(a);
 	lli st = a[n-1]%(2*k);
 	lli c = a[n-1];
 	for(lli i=0; i<n; i++)
 	{
 		a[i] = (a[i] - st + 2*k)%(2*k);
 	}
 	// pL(a);
 	lli l = 0;
 	lli r = k;
 	for(lli i=0; i<n; i++)
 	{
 		if(a[i]+k<=2*k)
 		{
 			if(a[i]>l)
 			{
 				l = a[i];
 			}
 			if(a[i]+k<r)
 			{
 				r = a[i]+k;
 			}
 			if(a[i]>=r || a[i]+k<=l)
 			{
 				cout<<"-1\n"; return;
 			}
 		}
 		else
 		{
 			if(r <= a[i] && l>=((a[i]+k)%(2*k)))
 			{
 				cout<<"-1\n"; return;
 			}
 			if(r>a[i])
 			{
 				l = max(a[i], l);
 				continue;
 			}
 			if(l<(a[i]+k)%(2*k))
 			{
 				r = min((a[i]+k)%(2*k), r);
 				continue;
 			}
 		}
 			// cout<<l<<" "<<r<<"\n";
	 	if(l>=r)
		{
			cout<<"-1\n"; return;
		}
 	}
 	cout<<c+l<<"\n";
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

