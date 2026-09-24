
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

lli poww(lli b, lli e)
{
	if(b==0) return 0;
	lli a = 1;
	for(int i = 0; i<e; i++) a*=b;
	return a;
}

void solve()
{
	lli a,n;
	cin >> a >> n;
 	string sta = to_string(a); int z = sta.size();
 	int d1, d2; cin>>d1>>d2;
 	int c1 = d1+'0';
 	int c2 = d2+'0';
 	lli m = LLONG_MAX;
	if(z==1)
	{
		m = min(abs(d1-a), abs(d2-a));
		m=min(m, abs(10*d1+d1-a));
		m=min(m, abs(10*d1+d2-a));
		m=min(m, abs(10*d2+d2-a));
		m=min(m, abs(10*d2+d1-a));
		cout<<m<<"\n";
		return;
	}
 	string upper="", lower="";
	for(int i = 0; i<z+1; i++) upper+=c1;
	for(int i = 0; i<z-1; i++) lower+=c2;
	if(d1==0)
	{
		upper=""; upper+=c2;
		for(int i = 0; i<z; i++) upper+=c1;
	}
	m = min(abs(stoll(upper)-a), abs(a-stoll(lower)));
	
 	lli n1 = sta.size()/2;
 	lli n2 = sta.size()-n1;
 	vector<lli> v1, v2; 	
 	for(int i = 0; i<(1<<n1); i++)
 	{
 		string k = "";
 		for(int j = 0; j<n1; j++)
 		{
 			if((i>>j)&1)k+=c1;
 			else k+=c2;
 		}
 		v1.push_back(stoll(k));
 	}
 	for(int i = 0; i<(1<<n2); i++)
 	{
 		string k = "";
 		for(int j = 0; j<n2; j++)
 		{
 			if((i>>j)&1)k+=c1;
 			else k+=c2;
 		}
 		v2.push_back(stoll(k));
 	}
 	sor(v1);
 	sor(v2);
 	// pL(v1);
 	// pL(v2);
 	lli p = poww(10,n2);
 	for(lli left:v1)
 	{
 		lli right = a-left*p;
 		auto u = lower_bound(all(v2), right);
 		if(u!=v2.end())
 		{
 			m = min(m, abs(left*p+(*u)-a));
 		}
 		if(u!=v2.begin())
 		{
 			auto l = u-1;
 			m = min(m, abs(left*p+(*l)-a));
 		}
 	}
 	cout<<m<<"\n";
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

