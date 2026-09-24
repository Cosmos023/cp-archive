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
	vector<int> a(n+1);
 	for(int i=0; i<n; i++) cin >> a[i+1];
 	string s; cin>>s; s="!"+s;

	vector<lli> p(n+1,0);
 	for(int i=1; i<=n; i++) p[i]=p[i-1]+a[i];
 	int l = 1, r = n;
 	lli ans = 0;
 	while(l<r)
 	{
 		while(l<=n && s[l]!='L')l++;
 		while(r>=1 && s[r]!='R')r--;
 		if(l<r&&s[l]=='L'&&s[r]=='R')
 			ans+=p[r]-p[l-1];
 		l++; r--;
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

