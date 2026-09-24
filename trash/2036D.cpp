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

lli count(string& k)
{
	lli c=0;
	for(int i = 0; i<(int)k.size()-3; i++)
	{
		if((k[i]=='1')&&(k[i+1]=='5')&&(k[i+2]=='4')&&(k[i+3]=='3'))
			c++;
	}
	return c;
}

void solve()
{
	int n,m;
	cin >> n>>m;
	lli ans=0;
	vector<string> a(n+2);
	string s="";
 	for(int i=0; i<m+2; i++)s+='!';
 	a[0]=s;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 		a[i]='!'+a[i]+'!';
 	}
 	a[n+1]=s;
 	// for(auto& c:a)cerr<<c<<endl;
 	for(int i=1; i<=min(n,m)/2; i++)
 	{
 		string k = "";
 		int j = i;
 		while(a[i][j]!='!')
 		{
 			k+=a[i][j];
 			a[i][j]='!';
 			j++;
 		}
 		j--;
 		int r = i+1;
 		while(a[r][j]!='!')
 		{
 			k+=a[r][j];
 			a[r][j]='!';
 			r++;
 		}
 		r--;
 		j--;
 		while(a[r][j]!='!')
 		{
 			k+=a[r][j];
 			a[r][j]='!';
 			j--;
 		}
 		j++;
 		r--;
		while(a[r][j]!='!')
 		{
 			k+=a[r][j];
 			a[r][j]='!';
 			r--;
 		}
		if(k.size()>1)
		{
			k+=k[0];
			k+=k[1];
			k+=k[2];
		}
		ans+=count(k);
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

