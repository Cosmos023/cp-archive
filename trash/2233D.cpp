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

bool check(int x, int y, vi& a)
{
	int n = a.size();
	if(a.size()<=2) return true;
	if(x<0||y<0||x>=n||y>=n) return false;
	swap(a[x],a[y]);
	map<int, vi> mp;
 	for(int i=0; i<n; i++)
 	{
 		mp[a[i]].push_back(i);
 	}
 	int f = 1;
 	for(auto& [m,v]:mp)
 	{
 		if(v.size()==1) continue;
 		for(int i = 0; i<v.size()-1; i++)
 		{
 			if(v[i+1]-v[i]!=1)
 			{
 				f=0; break;
 			}
 		}
 		if(f==0) break;
 	}
 	swap(a[x],a[y]);
	return f;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, vector<int>> mp;
 	for(int i=0; i<n; i++)
 	{
 		cin>>a[i];
 		mp[a[i]].push_back(i);
 	}
 	for(auto& [m,v]:mp)
 	{
 		if(v.size()==1) continue;
 		int c = 0;
 		for(int i = 0; i<v.size()-1; i++)
 		{
 			if(v[i+1]-v[i]!=1) c++;
 		}
 		if(c==0) continue;
 		if(c>=3) {NO; return;}
 		if(c==1)
 		{
 			int x;
 			for(int i = 0; i<v.size()-1; i++)
 			{
 				if(v[i+1]-v[i]!=1)
 				{
 					x=i; break;
 				}
 			}
 			if(check(v.back()+1, v[0],a)|| check(v.back(), v[0]-1,a) || check(v[x]+1, v[0],a) || check(v[x+1]-1,v[0],a) ||check(v[x]+1, v.back(),a) || check(v[x+1]-1,v.back(),a))
 			{
 				YES;
 			}
 			else
 			{
 				NO;
 			}
 			return;
 		}
 		int x;
		for(int i = 0; i<v.size()-1; i++)
		{
			if(v[i+1]-v[i]!=1)
			{
				x=i; break;
			}
		}
		int y=-1;
		for(int i = x+1; i<v.size()-1; i++)
		{
			if(v[i+1]-v[i]!=1)
			{
				y=i; break;
			}
		}
		if(check(v[0],v[y]+1, a) || check(v[x]+1, v.back(),a)) YES else NO;
		return;
 	}
 	if(check(0,0,a)) YES else NO;
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

