#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;
#define vi vector<lli>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

lli dp[100005][105];

lli kn(lli W, int N, vi& w, vi& v)
{
	// if(W==0) return V;
	if(W<0) return LLONG_MIN;
	if(N<=0) return 0;
	if(dp[W][N]!=-1) return dp[W][N];
	lli k1 = kn(W-w[N-1], N-1, w, v) + v[N-1];
	lli k2 = kn(W, N-1, w, v);
	return dp[W][N] = max(k1, k2);
}

void solve()
{
	int N, W;
	cin >> N >> W;
	vector<lli> w(N);
	vector<lli> v(N);
	if(W>1e5) W=1e5;
 	for(int i=0; i<N; i++)
 	{
 		cin >> w[i];
 		cin >> v[i];
 	}
 	cout<<kn(W, N, w, v);
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	memset(dp, -1, sizeof(dp));

	int t=1;
	// cin >> t;
	while(t--) 
	{
		solve();
	}
}