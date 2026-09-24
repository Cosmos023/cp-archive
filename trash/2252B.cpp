#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;
using vll = vector<lli>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<lli, lli>;
using ld = long double;
using ll = long long int;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#ifndef ONLINE_JUDGE
#include "util/Debug.h"
#else
#define debug(...)
#endif

void solve()
{
	int n;
	cin >> n;
	string a; cin>>a;
	int i = 0;
	multiset<int> m0, m1;
	while(i<n)
	{
		int j = i;
		while(j<n && a[i]==a[j]) j++;
		if(a[i]=='0') m0.insert(j-i);
		else m1.insert(j-i);
		i=j;
	}
	multiset<int> c0=m0, c1=m1; 
	int ans0 = 0;
	int cur=0;
	int y0=1;
	while(true)
	{
		if(m1.empty() && *m0.rbegin()==1){break;}
		if(m0.empty() && *m1.rbegin()==1){break;}
		if(!m0.empty() && !m1.empty() && *m0.rbegin()==1 && *m1.rbegin()==1){break;}
		ans0++;
		if(cur==0)
		{
			if(m0.size()==0){y0=0; break;}
			else if(*m0.rbegin()!=1) 
			{
				auto L = m0.end(); L--;
				int k = *L;
				m0.erase(L); m0.insert(k-1);
			}
			else m0.erase(m0.begin());
		}
		else
		{
			if(m1.size()==0){y0=0; break;}
			else if(*m1.rbegin()!=1) 
			{
				auto L = m1.end(); L--;
				int k = *L;
				m1.erase(L); m1.insert(k-1);
			}
			else m1.erase(m1.begin());
		}
		cur=1-cur;
	}
	int ans1 = 0;
	cur=1;
	int y1=1;
	while(true)
	{
		debug(c0, c1);
		if(c1.empty() && *c0.rbegin()==1){break;}
		if(c0.empty() && *c1.rbegin()==1){break;}
		if(!c0.empty() && !c1.empty() && *c0.rbegin()==1 && *c1.rbegin()==1){break;}
		ans1++;
		if(cur==0)
		{
			if(c0.size()==0){y1=0; break;}
			else if(*c0.rbegin()!=1) 
			{
				auto L = c0.end(); L--;
				int k = *L;
				c0.erase(L); c0.insert(k-1);
			}
			else c0.erase(c0.begin());
		}
		else
		{
			if(c1.size()==0){y1=0; break;}
			else if(*c1.rbegin()!=1) 
			{
				auto L = c1.end(); L--;
				int k = *L;
				c1.erase(L); c1.insert(k-1);
			}
			else c1.erase(c1.begin());
		}
		cur=1-cur;
	}
	if(y1==0&&y0==0) cout<<"-1\n";
	else if(y1==0) cout<<ans0<<endl;
	else if(y0==1) cout<<ans1<<endl;
	else cout<<min(ans0, ans1)<<endl;
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

