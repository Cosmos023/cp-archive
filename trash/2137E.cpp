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
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
 	for(int i=0; i<n; i++) cin >> a[i];
 	map<int,int> mp;
 	for(int i=0; i<n; i++)mp[a[i]]++;
 	sor(a);
 	int mex = 0;
 	for(int i=0; i<n; i++)
 	{
 		if(a[i]==mex) mex++;
 		else if(a[i]>mex) break;
 	}
 	for(int i=0; i<n; i++)
 	{
 		if((a[i]<mex && mp[a[i]]>1) || a[i]>mex) a[i]=mex;
 	}
 	k--;
 	if(k==0)
 	{
 		cout<<accumulate(all(a),0LL)<<"\n"; return;
 	}
 	mp.clear();
 	for(int i=0; i<n; i++)mp[a[i]]++;
 	mex = 0;
 	for(int i=0; i<n; i++)
 	{
 		if(a[i]==mex) mex++;
 		else if(a[i]>mex) break;
 	}
 	for(int i=0; i<n; i++)
 	{
 		if((a[i]<mex && mp[a[i]]>1) || a[i]>mex) a[i]=mex;
 	}
 	k--;
 	if(k==0)
 	{
 		cout<<accumulate(all(a),0LL)<<"\n"; return;
 	}
 	if(k%2)
 	{
 		mp.clear();
	 	for(int i=0; i<n; i++)mp[a[i]]++;
	 	mex = 0;
	 	for(int i=0; i<n; i++)
	 	{
	 		if(a[i]==mex) mex++;
	 		else if(a[i]>mex) break;
	 	}
	 	for(int i=0; i<n; i++)
	 	{
	 		if((a[i]<mex && mp[a[i]]>1) || a[i]>mex) a[i]=mex;
	 	}
 	}
 	cout<<accumulate(all(a),0LL)<<"\n";
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

