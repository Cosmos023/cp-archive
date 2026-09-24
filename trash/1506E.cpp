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

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n), ans(n,0);
 	for(int i=0; i<n; i++) cin >> a[i];
 	si s;
 	for(int i=0; i<n; i++) s.insert(i+1);
 	ans[0]=a[0];s.erase(a[0]);
 	for(int i=1; i<n; i++) 
 	{
 		if(a[i]!=a[i-1])ans[i]=a[i];
 		s.erase(a[i]);
 	}
 	for(int i=1; i<n; i++) 
 	{
 		if(ans[i]==0){ans[i]=*s.begin(); s.erase(s.begin());}
 	}
 	pL(ans);

 	for(int i=0; i<n; i++) s.insert(i+1);
 	for(int i=1; i<n; i++) 
 	{
 		if(a[i]!=a[i-1])ans[i]=a[i]; else ans[i]=0;
 		s.erase(a[i]);
 	}
 	s.erase(a[0]);
 	int i = 0;
 	// pL(ans);
 	while(i<n)
 	{
 		int j = i+1;
 		while(j<n && ans[j]==0) j++;
 		if(j==n) break;
 		for(int k = i+1; k<j; k++)
 		{
 			auto it = --s.lower_bound(ans[i]);
 			ans[k] = *it;
 			s.erase(it);
 		}
 		i=j;
 	}
 	// pL(ans);
 	if(i<n)
 	{
 		for(int k = i+1; k<n; k++)
 		{
 			ans[k] = *s.rbegin();
 			s.erase(ans[k]);
 		}
 	}
 	pL(ans);
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

