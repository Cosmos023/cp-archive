#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define all(a) (a).begin(), (a).end()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	lli p,q;
	cin >> p>>q;
	bool d = true;
	if(q<=p) 
	{
		cout<<"Alice\n";
		return;
	}
	if(q/(1.0L*p/2)<=3.0L)
	{
		cout<<"Bob\n";
		return;
	}
	// while(p>=0 && q>=1)
	// {
	// 	if(q<=p) 
	// 	{
	// 		cout<<"Alice\n";
	// 		return;
	// 	}
	// 	if((p%2==0 && q/(p/2)<=3) || (p%2==1 && (lli)q/(1.0*p/2)<=3))
	// 	{
	// 		cout<<"Bob\n";
	// 		return;
	// 	}
	// }
	cout<<"Alice\n";

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

