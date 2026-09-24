#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

// vector<int> pcv(100005);
lli m = ((lli)(1e9+7));

lli poww(lli n, lli p)
{
	if(p==0)
	{
		return 1;
	}
	lli res = poww(n, p/2);
	if(p%2==1)
	{
		return (res*res*n)%m;
	}
	else
		return (res*res)%m;
}


void solve()
{
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	vector<int> n0(n+10, 0); 
	vector<int> n1(n+10, 0);
	int c0 = 0, c1 = 0;
	for(int i = 0; i<s.size(); i++)
	{
		if(s[i]=='0')
		{
			c0++;
		}
		else c1++;
		n0[i+1] = c0;
		n1[i+1] = c1;
	}
	// plist(n0,n+1);
	// plist(n1,n+1);
	while(q--)
	{
		int l, r;
		cin>>l>>r;
		lli nz = n0[r]-n0[l-1];
		lli no = n1[r]-n1[l-1];
		// cout<<nz<<" "<<no<<"\n";
		// cout<<pcv[nz+no+1]-no+1<<"\n";
		lli s = 0;
		lli k = 2;
		// for(int i = 0; i<no+nz; i++)
		// {
		// 	s = (s+k)%m;
		// 	k = (k*2)%m;
		// }
		k = poww(2, 1LL*(no+nz));
		cout<<((k-1)-(poww(2,nz)-1)+m)%m<<"\n";
	}
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