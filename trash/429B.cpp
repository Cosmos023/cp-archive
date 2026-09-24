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
	int n,m;
	cin >> n >> m;
	vector<vll> a(n, vll(m));
 	for(int i=0; i<n; i++)
 	{
 		for(int j=0; j<m; j++)
 		{
 			cin>>a[i][j];
 		}
 	}
	vector<vll> lu(n, vll(m,  LLONG_MIN));
	lu[0][0]=a[0][0];
	for(int i=1; i<m; i++)lu[0][i]=lu[0][i-1]+a[0][i];
	for(int i=1; i<n; i++)lu[i][0]=lu[i-1][0]+a[i][0];
	for(int i=1; i<n; i++) for(int j=1; j<m; j++) lu[i][j] = max(lu[i][j-1],lu[i-1][j])+a[i][j];
	vector<vll> ld(n, vll(m,  LLONG_MIN));
	ld[n-1][0]=a[n-1][0];
	for(int i=1; i<m; i++)ld[n-1][i]=ld[n-1][i-1]+a[n-1][i];
	for(int i=n-2; i>=0; i--)ld[i][0]=ld[i+1][0]+a[i][0];
	for(int i=n-2; i>=0; i--) for(int j=1; j<m; j++) ld[i][j] = max(ld[i][j-1],ld[i+1][j])+a[i][j];
	vector<vll> rd(n, vll(m,  LLONG_MIN));
	rd[n-1][m-1]=a[n-1][m-1];
	for(int i=m-2; i>=0; i--)rd[n-1][i]=rd[n-1][i+1]+a[n-1][i];
	for(int i=n-2; i>=0; i--)rd[i][m-1]=rd[i+1][m-1]+a[i][m-1];
	for(int i=n-2; i>=0; i--) for(int j=m-2; j>=0; j--) rd[i][j] = max(rd[i][j+1],rd[i+1][j])+a[i][j];
	vector<vll> ru(n, vll(m,  LLONG_MIN));
	ru[0][m-1]=a[0][m-1];
	for(int i=m-2; i>=0; i--)ru[0][i]=ru[0][i+1]+a[0][i];
	for(int i=1; i<n; i++)ru[i][m-1]=ru[i-1][m-1]+a[i][m-1];
	for(int i=1; i<n; i++) for(int j=m-2; j>=0; j--) ru[i][j] = max(ru[i][j+1],ru[i-1][j])+a[i][j];

	lli ans  = LLONG_MIN;
	for(int i = 1; i<n-1; i++)
	for(int j = 1; j<m-1; j++)
	{
		ans = max(lu[i-1][j]+rd[i+1][j]+ld[i][j-1]+ru[i][j+1], ans);
		ans = max(ru[i-1][j]+ld[i+1][j]+lu[i][j-1]+rd[i][j+1], ans);
	}
	cout<<ans<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

