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
	string s; cin>>s;
	s='!'+s;
 	lli z = 0;
 	lli n0,n1,n2; n1=n2=0;n0=1;
 	vll A(n+1,0);
 	for(int i=1; i<=n; i++) 
 	{
 		z += 1+(s[i]=='1');
 		A[i]=z%3;
 		if(z%3==2) n2++;
 		else if(z%3==1) n1++;
 		else n0++;
 	}
 	lli ans = (n)*(n+1)/2-(n1*(n1-1)/2+n2*(n2-1)/2+n0*(n0-1)/2);
 	char l = s[0];
 	int i = 1, j = 1;
 	while(i<=n)
 	{
 		j=i;
 		while(j<=n && s[j]!=l){j++; if(j<=n)l=s[j];}
 		if(j<=n&&A[i-1]==A[j])ans+=2*(j-i)-1;
 		i=j+1;
 	}
 	cout<<ans<<endl;
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

