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
	vector<lli> a(n);
	lli n1 = 0;
	lli ans = 0;
	lli c = 0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		if(a[i]==1) n1++;
 		else {ans+=a[i]; c++;}
 	}
 	if(ans<=2 && n1<1)
 	{
 		cout<<"0\n"; return;
 	}
 	if(c==1)
 	{
 		ans+=min(n1, ans/2);
 		cout<<ans<<"\n";
 		return;
 	}
 	for(int i = n-1; i>=0; i--)
 	{
 		if(a[i]>3)
 		{
 			lli z = min(n1, (a[i]-2)/2);
 			n1-=z;
 			ans+=z;
 		}
 	}
 	cout<<ans<<"\n";
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

