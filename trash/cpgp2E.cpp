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
	int n, k;
	cin >> n>>k;
	vector<int> a(n+1), b(n+1);
	lli S = 0;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 		S+=a[i];
 	}
 	for(int i=1; i<=n; i++) cin>>b[i];
 	multiset<pair<lli,int>> dif;
 	for(int i=1; i<=n; i++)
 		dif.insert({b[i]-a[i],i});
 	int q; cin>>q;
 	while(q--)
 	{
 		int id,j,x; cin>>id>>j>>x;

 		if(dif.find({b[j]-a[j], j})!=dif.end())
 		{
 			dif.erase(dif.find({b[j]-a[j], j}));
 			S-=b[j]-a[j];
 		}
 		else
 		{
 			dif.erase(dif.find({-b[j]+a[j], j}));
 			S-=a[j]-b[j];
 		}
 		if(id==1)
 		{
 			a[j]=x;
 			dif.insert({b[j]-a[j],j});
 			S+=b[j]-a[j];
 		}
 		else
 		{
 			b[j]=x;
 			dif.insert({b[j]-a[j],j});
 			S+=b[j]-a[j];
 		}

	 	int z=0;
	 	multiset<pair<lli,int>> rem;
	 	for(auto it=dif.rbegin(); it!=dif.rend(); it--)
	 	{
	 		if(z==k) break;
	 		z++;
	 		if(((*it).first)<=0) break;
	 		S+=((*it).first);
	 		swap(a[(*it).second], b[(*it).second]);
	 		rem.insert(*it);
	 	}
	 	for(auto c:rem)
	 	{
	 		dif.erase(dif.find(c));
	 		dif.insert({-c.first,c.second});
	 	}
	 	rem.clear();
	 	cout<<S<<"\n";
 	}
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

