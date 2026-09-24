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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n";

lli ans = 0;

bool check(vi& a, int st, int n)
{
	if(n<=1) return true;
	bool k;
	int M1 = *max_element(a.begin()+st, a.begin()+st+n/2);
	int M2 = *max_element(a.begin()+st+n/2, a.begin()+st+n);
	int m1 = *min_element(a.begin()+st, a.begin()+st+n/2);
	int m2 = *min_element(a.begin()+st+n/2, a.begin()+st+n);
	if(M1<m2) k = true;
	else if(M2<m1){k = true; ans++;}
	else k = false;
	return k && check(a, st, n/2) && check(a, st+n/2, n/2);
}

void solve()
{
	ans = 0;
	int m;
	cin >> m;
	vector<int> a(m+1, 0);
 	for(int i=1; i<=m; i++)
 	{
 		cin >> a[i];
 	}
 	if(check(a, 1, m))
 	{
 		cout<<ans<<"\n";
 	}
 	else cout<<"-1\n";
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

