#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ll = long long int;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

using ld = long double;

void solve()
{
	int w, b; cin>>w>>b;
	vector<vector<ld>> dpP(w+1, vector<ld>(b+1, 0));
	vector<vector<ld>> dpD(w+1, vector<ld>(b+1, 0));
	for(int i=0; i<=w; i++) {dpP[i][0]=1;}
	for(int i=1; i<=w; i++)
	{
		for(int j=1; j<=b; j++)
		{
			dpP[i][j] = 1.0L*i/(i+j) + 1.0L*j/(i+j)*dpD[i][j-1];
			if(j>=2)
				dpD[i][j] = 1.0*j/(i+j) * (1.0L*i/(i+j-1)*dpP[i-1][j-1] + 1.0L*(j-1)/(i+j-1)*dpP[i][j-2]);
			else
				dpD[i][j] = 1.0*j/(i+j) * (dpP[i-1][j-1]);
		}
	}
	cout<<fixed<<setprecision(15)<<dpP[w][b]<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--)
	{
		solve();
	}
}

