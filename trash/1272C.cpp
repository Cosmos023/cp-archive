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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int n,k;
	cin >> n>>k;
	vector<int> a(26,0);
	string s; cin>>s;
	for(int i=0; i<k; i++){char x; cin>>x; a[x-'a']=1;};
	lli ans = 0;
	int j = 0;
	for(int i=0; i<n; i++)
	{
		if(a[s[i]-'a']) continue;
		lli k = i-j;
		ans+=k*(k+1)/2;
		j=1+i;
	}
	lli p = n-j;
	ans+=p*(p+1)/2;
	cout<<ans<<endl;
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

