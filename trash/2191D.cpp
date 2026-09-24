#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int nl = 0, nr = 0;
	vector<pair<int,int>> vp;
	for(int i = 0; i<=2*n; i++)
		s+="x";
	for(int i = 0; i<=n; i++)
	{
		if(nr>nl)
		{
			nr=0;
			nl=0;
			continue;
		}

		if(s[i]=='(') nl++;
		else if(s[i]==')') nr++;

	// cout<<"nl "<<nl<<" nr "<<nr<<"\n";
		if((s[i]!=')' || (0)) && nr>0)
		{
			vp.push_back({i-2*min(nl,nr),min(nl,nr)});
			// i-=(nr+1);
	// for(auto p:vp)
	// {
	// 	cout<<p.first<<" "<<p.second<<"\n";
	// }
	// cout<<"\n";
			nl = 0;
			nr=0;
			i--;
		}
		if(nr>nl)
		{
			vp.push_back({i-2*min(nl,nr),min(nl,nr)});
			nl=0;
			nr=0;
		}
	}
	// for(auto p:vp)
	// {
	// 	cout<<p.first<<" "<<p.second<<"\n";
	// }
	// cout<<'\n';

	int ans = -1;
	for(auto p:vp)
	{
		int z = 1;
		for(int i = 0; i<p.second; i++)
		{
			if(s[p.first+2*p.second+i]!='(')
			{
				z=0;
				break;
			}
		}
		if(z==0)
			continue;
		for(int i = 0; i<p.second; i++)
		{
			if(s[p.first+3*p.second+i]=='(')
			{
				if(n-2*p.second!=0)
				{
					ans = max(ans, n-2*p.second);
				}
				continue;
			}
		}
	}
	cout<<ans<<"\n";
 	// for(int i=0; i<n-1; i++){ if(s[i]=='(' && s[i+1]==')'){ if(s[i+2]!='
 	// (') continue; else{ if(s[i+3]=='('){ cout<<n-2<<"\n"; return; } } } }
 	// cout<<"-1\n";
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

