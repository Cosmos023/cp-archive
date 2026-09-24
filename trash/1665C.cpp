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
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n+1);
 	for(int i=2; i<=n; i++)
 	{
 		cin >> a[i];
 	}
 	map<int,int> m;
 	m[0]=1;
 	for(int i=2; i<=n; i++) m[a[i]]++;
 	vi lvl;
 	for(auto p:m) lvl.push_back(p.second);
 	sor(lvl);
 	// pL(lvl);
 	// if(count(all(lvl),1)==lvl.size())
 	// {
 	// 	cout<<lvl.size()<<"\n"; return;
 	// }
 	int r = lvl.size()-1;
 	int ans = lvl.size();

 	for(int k = 0; k<lvl.size();k++)
 	{
 		if(lvl[r]>=lvl.size()-k) lvl[r]-=(lvl.size()-k); else lvl[r] = 0;
 		r--;
 	}


 	multiset<int> s;
 	for(int i = 0; i<lvl.size(); i++) if(lvl[i]!=0)s.insert(lvl[i]);

 	if(s.size()==0)
 	{
 		cout<<ans<<endl;
 		return;
 	}

 	multiset<int> cpy;
 	while(!s.empty())
 	{
 		ans++;
 		int x = *s.rbegin();
 		s.erase(s.find(x));
 		if(x!=1)
 			s.insert(x-1);
 		cpy.clear();
 		for(int c:s) cpy.insert(c);
 		for(int c:cpy)
 		{
			auto k = s.find(c);
			s.erase(k);
			if(c!=1) s.insert(c-1);
 		}
 	}
 	
 	cout<<ans<<"\n";
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

