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

__int128_t nga(__int128_t x)
{
	__int128_t l = 1, r = x;
	__int128_t m;
	while(l<=r)
	{
		m = (l+r)/2;
		if(x%m==0 && m==x/m) return m;
		else if(m<=x/m) l=m+1;
		else r=m-1;
	}
	return -1;
}

void solve()
{
	lli n,c;
	cin >> n >> c;
	vector<lli> s(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> s[i];
 	}
 	__int128_t s1, s2;
 	s1=s2=0;
 	for(int i=0; i<n; i++)
 	{
 		s1+=s[i];
 		s2+=s[i]*s[i];
 	}
 	lli w = (lli)(-(__int128_t)s1 + (lli)(nga((__int128_t)s1*s1 - (__int128_t)n*(s2-c))))/(2*n);
 	cout<<w<<"\n";
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

