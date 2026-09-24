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
	int n,q;
	cin >> n>>q;
	vector<lli> a(n);
	vector<lli> ps(n), mx(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	mx[0]=ps[0]=a[0];
 	for(int i=1; i<n; i++)
 	{
 		ps[i]=ps[i-1]+a[i];
 		mx[i] = max(mx[i-1],a[i]);
 	}
 	while(q--)
 	{
 		lli k; cin>>k;	
 		lli ans=0;
 		auto it = upper_bound(all(mx),k);
 		if(it==mx.begin())
 		{
 			cout<<"0 "; continue;
 		}
 		it--;
 		cout<<ps[it-mx.begin()]<<" ";
 	}
 	cout<<"\n";
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

