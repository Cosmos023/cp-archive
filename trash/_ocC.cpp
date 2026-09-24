
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
	vector<int> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	lli ml = 0;
 	lli mr = 1;
 	lli mg = gcd(a[0],a[1]);
 	vi gs;
 	for(int i = 1; i<n; i++)
 	{
 		lli k = gcd(a[i-1],a[i]);
 		gs.push_back(k);
 		if(k>mg) mg = k;
 	}
 	gs.push_back(-1);
 	// pL(gs);
 	lli mlen = 1;
 	for(int i = 0; i<gs.size(); i++)
 	{
 		if(gs[i]!=mg) continue;

 		lli l = i;
 		lli r = i+1;	
 		while(gs[r]==mg) r++;
 		if((r-l)>mlen)
 		{
 			mr = r-1;
 			ml = l;
 			mlen = r-l;
 		}
 		i = r-1;
 	}
 	cout<<mg<<" "<<mlen+1<<"\n";
 	// cout<<mg<<" g \n";
 	// cout<<mlen<<" mlen \n";
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

