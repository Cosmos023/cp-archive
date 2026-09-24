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
	int n;
	cin >> n;
	vector<int> a(n);
	multiset<int> ms, ans;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i]; ms.insert(a[i]);
 	}
 	for(int i=0; i<n; i++)
 	{
 		if(a[i]==*ms.begin())
 		{
 			ans.insert(*ms.begin());
 			ms.erase(ms.begin());
 			continue;
 		}
		ans.insert(a[i]+1);
		ms.erase(ms.find(a[i])); 		
		ms.insert(a[i]+1); 		
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

