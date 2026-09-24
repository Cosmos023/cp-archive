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
	vector<int> a1(n), a2(n);
 	for(int i=0; i<n; i++) cin >> a1[i];
 	for(int i=0; i<n; i++) cin >> a2[i];
 	// int k = 0;
 	// for(int i=0; i<n; i++)
 	// {
 	// 	if(a1[i]+a2[i]>a1[k]+a2[k])
 	// 	{
 	// 		k = i;
 	// 	}
 	// 	else if(a1[i]+a2[i]==a1[k]+a2[k])
 	// 	{
 	// 		if(max(a1[i],a2[i])<max(a1[k],a2[k]))
 	// 		{
 	// 			k=i;
 	// 		}
 	// 	}
 	// }
 	// lli ans = a1[k]+a2[k];
	lli m = 0;
 	for(int i=0; i<n; i++)
 	{
 		m+=max(a1[i],a2[i]);
 	}
 	lli ans = LLONG_MIN;
 	for(int i=0; i<n; i++)
 	{
 		ans = max(ans, m-max(a1[i],a2[i])+a1[i]+a2[i]);
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

