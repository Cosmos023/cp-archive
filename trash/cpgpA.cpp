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
	int n;
	cin >> n;
	string a; cin >> a;
	lli c = 0;
 	for(int i=n-1; i>=0; i--)
 	{
 		if((n-i)%2==0 && a[i]=='1') c+=1;
 		if((n-i)%2==1 && a[i]=='1') c+=2;
 	}
 	if(c%3==0)
 		cout<<"1\n";
 	else
 		cout<<"0\n";
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

