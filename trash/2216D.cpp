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
	int n,k,p,q;
	cin >> n>>k>>p>>q;
	vector<int> a(n);
	vi P(n), QP(n), Q(n);
	lli ans = 0;
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 		P[i]=a[i]%p;
 		Q[i]=a[i]%q;
 		QP[i] = (a[i]%q)%p;
 	}
 	lli n1=0,n2=0,n3=0;
 	for(int i = 0; i<k; i++)
 	{
 		n1+=P[i]; n2+=QP[i]; n3+=Q[i];
 	}
 	ans=min(n1,min(n2,n3));
 	for(int i = k; i<n; i++) ans+=min(P[i],min(QP[i],Q[i]));
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

