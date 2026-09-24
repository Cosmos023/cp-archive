#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ld = long double;
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

void solve()
{
	int n, q;
	cin >> n;
	map<int, int> M;
	vi C(9, 0);
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		M[x]++;
		if(M[x]==2){C[2]++;}
		if(M[x]==4){C[4]++;}
		if(M[x]==6){C[6]++;}
		if(M[x]==8){C[8]++;}
	}
	cin>>q;
	while(q--)
	{
		char c; int x; cin>>c>>x;
		if(c=='-')
		{
			M[x]--;
			if(M[x]==1){C[2]--;}
			if(M[x]==3){C[4]--;}
			if(M[x]==5){C[6]--;}
			if(M[x]==7){C[8]--;}
		}
		else 
		{
			M[x]++;
			if(M[x]==2){C[2]++;}
			if(M[x]==4){C[4]++;}
			if(M[x]==6){C[6]++;}
			if(M[x]==8){C[8]++;}
		}
		debug(C);
		if(C[8] || (C[6] && C[2]>=2) || (C[4]>=2) || (C[4] && C[2]>=3)) YES; else NO;
	}
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

