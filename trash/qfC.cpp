#include <bits/stdc++.h>
using namespace std;

using ld = long double;
using ll = long long;
const int mod = 1e9+7;

void solve()
{
	int n; cin>>n;
	vector<vector<ll>> dpS(n+1, vector<ll>(2, 0)), dpT(n+1, vector<ll>(3, 0));
	dpT[1][1]=1;
	dpS[1][1]=1;
	dpT[1][2]=0;
	for(int i = 2; i <= n; i++)
	{
		dpS[i][1] = (dpT[i-1][1]+dpT[i-1][2])%mod;
		dpT[i][1] = dpS[i-1][1];
		dpT[i][2] = dpT[i-1][1];
	}
	cout<<(dpS[n][1]+dpT[n][1]+dpT[n][2])%mod<<endl;
}

int main()
{
	int t; cin>>t; while(t--) { solve(); }
}