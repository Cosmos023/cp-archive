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
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	cout<<"? 1 2"<<endl;
	int z1; cin>>z1;
	cout<<"? 1 3"<<endl;
	int z2; cin>>z2;
	si s = {4,8,15,16,23,42};
	vi a(7,-1);
	if(z1%23==0 || z2%23==0)
	{
		if(z1%23==0 && z2%23==0)
		{
			a[1]=23; a[2]=z1/a[1];a[3]=z2/a[1];
		}
		else if (z1%23==0)
		{
			a[2]=23; a[1]=z1/a[2];a[3]=z2/a[1];
		}
		else
		{
			a[3]=23; a[1]=z2/a[3];a[2]=z1/a[1];
		}
	}
	else if(z1%7==0 || z2%7==0)
	{
		if(z1%7==0 && z2%7==0)
		{
			a[1]=42; a[2]=z1/a[1];a[3]=z2/a[1];
		}
		else if (z1%7==0)
		{
			a[2]=42; a[1]=z1/a[2];a[3]=z2/a[1];
		}
		else
		{
			a[3]=42; a[1]=z2/a[3];a[2]=z1/a[1];
		}
	}
	else if(z1%5==0 || z2%5==0)
	{
		if(z1%5==0 && z2%5==0)
		{
			a[1]=15; a[2]=z1/a[1];a[3]=z2/a[1];
		}
		else if (z1%5==0)
		{
			a[2]=15; a[1]=z1/a[2];a[3]=z2/a[1];
		}
		else
		{
			a[3]=15; a[1]=z2/a[3];a[2]=z1/a[1];
		}
	}
	else
	{
		a[2]=512/z2; a[3]=512/z1; a[1]=z1/a[2];
	}
	s.erase(a[1]);
	s.erase(a[2]);
	s.erase(a[3]);
	cout<<"? 1 4"<<endl;
	cin>>z1; a[4]=z1/a[1];
	cout<<"? 1 5"<<endl;
	cin>>z1; a[5]=z1/a[1];
	s.erase(a[4]);
	s.erase(a[5]);
	a[6]=*s.begin();
	cout<<"! "; plist1(a,6);
	cout<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}

