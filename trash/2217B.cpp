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
	int n,k;
	cin >> n>>k;
	vector<int> a(n+1);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	int p; cin>>p;
 	int n1 = 0, n2 = 0;
 	int f = 1;
 	int x = a[p];
 	for(int i=1; i<=p; i++)
 	{
 		if((a[i]==!x)&&f || (a[i]==x)&&!f)
 		{
 			n1++; f^=1;
 		}
 	}
 	f=1;
 	for(int i=n; i>=p; i--)
 	{
 		if((a[i]==!x)&&f || (a[i]==x)&&!f)
 		{
 			n2++; f^=1;
 		}
 	}
 	cout<<max(n1,n2)<<"\n";
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

