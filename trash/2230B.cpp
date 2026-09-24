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
	string s; cin>>s;
	int n = s.size();
	lli ans = 0;
 	for(int i=0; i<n; i++)
 	{
 		if(s[i]=='4') ans++;
 		if(s[i]=='3') s[i]='1';
 	}
 	char cur=s[0];
 	int x = 1;
 	vector<pair<char, int>> v;
 	for(int i=1; i<n; i++)
 	{
 		if(s[i]==cur||s[i]=='4')
 		{
 			if(s[i]!='4')
 			x++;
 		}
 		else
 		{
 			v.push_back({cur, x});
 			x=1;
 			cur=s[i];
 		}
 	}
 	v.push_back({cur, x});
 	int z = v.size();
 	// for(int i=0; i<z; i++)
 	// {
 	// 	cout<<v[i].first<<" "<<v[i].second<<"\n";
 	// }
 	vi pre1(z+2, 0);
 	vi pos2(z+2, 0);
 	for(int i=1; i<=z; i++)
 	{
 		if(v[i-1].first=='1')
 			pre1[i]=pre1[i-1]+v[i-1].second;
 		else
 			pre1[i]=pre1[i-1];
 	}
 	for(int i=z; i>=1; i--)
 	{
 		if(v[i-1].first=='2')
			pos2[i]=pos2[i+1]+v[i-1].second;
 		else
 			pos2[i]=pos2[i+1];
 	}
 	int k=INT_MAX;
 	for(int i=1; i<=z; i++)
 	{
 		k = min(k ,pre1[i-1]+pos2[i+1]);
 	}
 	if(k!=INT_MAX)ans+=k;
 	// int y= 0;
 	// int x1=0,x2=0;
 	// for(int i=n-1; i>=0; i--)
 	// {
 	// 	if(!y && s[i]=='2') y=1;
 	// 	if(y && (s[i]=='1'||s[i]=='3')) x2++;
 	// }
 	// y=0;
 	// for(int i=0; i<n; i++)
 	// {
 	// 	if(!y && (s[i]=='1'||s[i]=='3')) y=1;
 	// 	if(y && (s[i]=='2')) x1++;
 	// }
 	// ans+=min(x1,x2);

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

