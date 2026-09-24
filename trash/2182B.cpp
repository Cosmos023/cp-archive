#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;
#define vi vector<int>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";


vi smo;
vi sme;

void sm()
{
	int co=0,ce=0;
	for(int i = 0 ; i<30; i++)
	{
		if(i%2) co+=(1<<i);
		else ce+=(1<<i);
		smo.push_back(co);
		sme.push_back(ce);
	}
}

void solve()
{
	int a, b;
	cin>>a>>b;
	if(a>b) swap(a, b);
	int i = 0;
	for(; i<30;i++)
	{
		if(min(smo[i],sme[i])>a || max(smo[i],sme[i])>b)
			break;
	}
	cout<<i<<"\n";
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	sm();
	// pL(sm1);
	int t=1;
	cin >> t;
	while(t--) 
	{
		solve();
	}
}