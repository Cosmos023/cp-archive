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

int ask(int a, int b)
{
	cout<<"? "<<a+1<<" "<<b+1<<endl; 
	int z; cin>>z;
	if(z==1) return a;
	if(z==2) return b;
	return -1;
}

void solve()
{
	int n;
	cin >> n;

	vi X;
	for(int i = 0; i<(1<<(n)); i++) X.push_back(i);
	while(X.size()>=4)
	{
		vi N;
		for(int i = 0; i<X.size(); i+=4)
		{
			int A = ask(X[i], X[i+2]);
			if(A==-1) 
			{
				int k = ask(X[i+1], X[i+3]); N.push_back(k);
				continue;
			}
			if(A==X[i])
			{
				int k = ask(X[i], X[i+3]); N.push_back(k);
			}
			else if(A==X[i+2])
			{
				int k = ask(X[i+2], X[i+1]); N.push_back(k);
			}
		}
		X=N;
	}
	int ans;
	if(X.size()==2) ans = ask(X[0], X[1]);
	else ans = X[0];
	cout<<"! "<<ans+1<<endl;
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

