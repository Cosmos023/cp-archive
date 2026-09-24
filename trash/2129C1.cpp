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
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<"";cout<<endl;
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

int ask(int l, int r)
{
	int m = (l+r)/2;
	cout<<"? "<<2*(m-l+1)<<" ";
	for(int i = l; i<=m; i++) cout<<i<<" ";
	for(int i = l; i<=m; i++) cout<<i<<" ";
	cout<<endl;
	int z; cin>>z; return z;
}

void solve()
{
	int n;
	cin >> n;
	vector<char> a(n+1, '-');
 	int l = 1, r=n;
 	int k;
 	while((r-l+1)>2)
 	{
 		k = ask(l, r);
 		if(k==0)
 		{
 			l=(l+r)/2;
 		}
 		else
 		{
 			r=(l+r)/2;
 		}
 	}
 	cout<<"? "<<2<<" "<<l<<" "<<r<<endl;
 	int c; cin>>c;
 	a[l]='('; a[r]=')';
 	if(c==0)
 	{
 		swap(a[l],a[r]);
 		swap(l,r);
 	}
 	// cout<<l<<"-"<<r<<endl;
 	for(int i = 1; i<=n-1; i+=2)
 	{
 		cout<<"? 8 ";
 		cout<<l<<" "<<l<<" "<<l
 		<<" "<<i<<" "<<i+1<<" "<<i<<" "<<i+1
 		<<" "<<r<<endl;
 		// cout<<i<<a[1]<<"1ii"<<endl;
 		int z; cin>>z;
 		// cout<<z<<"z"<<endl;
 		if(z==4) {a[i]='('; a[i+1]=')';}
 		if(z==6) {a[i]=')'; a[i+1]='(';}
 		if(z==1) {a[i]='('; a[i+1]='(';}
 		if(z==3) {a[i]=')'; a[i+1]=')';}
 		// cout<<i<<a[1]<<"1ii"<<endl;
 	}
 	if(n%2)
 	{
 		cout<<"? 2 ";
 		cout<<l<<" "<<n<<endl;
 		int z; cin>>z;
 		if(z==0) a[n]='('; else a[n]=')';
 	}
 	cout<<"! ";
 	pL1(a, n);
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

