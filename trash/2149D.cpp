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

void solve()
{
	ll n;
	cin >> n;
	string s; cin>>s;
	vi A, B;
	for(ll i=0; i<n; i++)
	{
		if(s[i]=='a') A.push_back(i);
		else B.push_back(i);
	}
	if(A.size()==0 || B.size()==0)
	{
		cout<<"0\n"; return;
	}
	ll medA = A[A.size()/2];
	ll medB = B[B.size()/2];
	ll ansA = 0, ansB=0;
	for(ll i = 0; i<A.size(); i++)
	{
		if(A[i]<medA)
		{
			ansA += medA-A.size()/2+i-A[i];
		}
		else if(A[i]>medA)
		{
			ansA += A[i]-(medA+i-A.size()/2);
		}
	}
	debug(B);
	for(ll i = 0; i<B.size(); i++)
	{
		if(B[i]<medB)
		{
			ansB += medB-B.size()/2+i-B[i];
		}
		else if(B[i]>medB)
		{
			ansB += B[i]-(medB+i-B.size()/2);
		}
	}
	cout<<min(ansA, ansB)<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll t=1;
	cin >> t;
	while(t--)
	{
		solve();
	}
}

