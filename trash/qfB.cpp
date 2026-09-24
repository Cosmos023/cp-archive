#include <bits/stdc++.h>
using namespace std;

using ld = long double;
using ll = long long;

void solve()
{
	int n; cin>>n;
	vector<ld> E(n+1, 0);
	vector<ld> S(n+1, 0);
	for(int i = 1; i <= n; i++)
	{
		E[i] = 1+S[i-1]/i;
		S[i] += S[i-1]+E[i];
	}
	cout<<(ll)E[n]<<endl;
}

int main()
{
	int t; cin>>t; while(t--) { solve(); }
}