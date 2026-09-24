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

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n), b(n);
 	for(int i=0; i<n; i++) cin >> a[i];
 	for(int i=0; i<n; i++) cin >> b[i];
 	lli ans = 0;
 	for(int i = 0; i<n; i++)
 	{
 		if(a[i]<=b[i]) continue;
 		int k = i;
 		for(; k<n; k++)
 		{
 			if(a[k]<=b[i]) break;
 		}
 		if(k==n)
 		{
 			cout<<"-1\n"; return;
 		}
 		for(int p = k; p>i; p--)
 		{
 			swap(a[p],a[p-1]);
 		}
 		// pL(a);
 		ans+=(k-i);
 	}
 	// cout<<"h\n";
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

