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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	// vector<int> a(n);
	if(n==1)
	{
		cout<<"1\n"; return;
	}
	if(n==2 || n==3)
	{
		cout<<"-1\n"; return;
	}
	int m = n/4;
 	int k = n-4*m;
 	if(k==0||k==1)
 	{
	 	for(int i=0; i<m; i++)
	 	{
	 		cout<<i*4+2<<" "<<i*4+4<<" "<<i*4+1<<" "<<i*4+3<<" ";
	 	}
	 	if(k==1)
	 	{
	 		cout<<m*4+1<<" ";
	 	}
	 	cout<<"\n";
 	}
 	else
 	{
 		// for(int i=0; i<m; i++)
	 	// {
	 	// 	cout<<i*4+3<<" "<<i*4+1<<" "<<i*4+4<<" "<<i*4+2<<" ";
	 	// }
	 	// if(k==3)
	 	// {
	 	// 	cout<<m*4+1<<" ";
	 	// }
	 	// cout<<"\n";
 		for(int i=0; i<m-1; i++)
	 	{
	 		cout<<i*4+2<<" "<<i*4+4<<" "<<i*4+1<<" "<<i*4+3<<" ";
	 	}
	 	// 	// cout<<m*4+1<<" ";
	 	// if(k==3)
	 	// {
 		if(k==2)
 		{
	 		cout<<(m-1)*4+1<<" "<<(m-1)*4+3<<" "<<(m-1)*4+5<<" "<<(m-1)*4+2<<" "<<(m-1)*4+4<<" "<<(m-1)*4+6<<" ";
 		}
 		if(k==3)
 		{
	 		cout<<(m-1)*4+1<<" "<<(m-1)*4+3<<" "<<(m-1)*4+5<<" "<<(m-1)*4+7<<" "<<(m-1)*4+2<<" "<<(m-1)*4+4<<" "<<(m-1)*4+6<<" ";
 		}
 		cout<<endl;
	 	// }
	 	// cout<<"\n";
 		// int m = n/6;
 		// int k = n-6*m;
	 	// for(int i=0; i<m; i++)
	 	// {
	 	// 	cout<<i*6+1<<" "<<i*6+3<<" "<<i*6+5<<" "<<i*6+2<<" "<<i*6+4<<" "<<i*6+6<<" ";
	 	// } 
	 	// if(k==1)
	 	// {
	 	// 	cout<<m*6+1<<" ";
	 	// }
	 	// cout<<"\n";
 	}
 	// else if (k==2)
 	// {
 	// 	cout<<m*4+2<<" "<<m*4+4;
 	// }
 	// else if (k==2)
 	// {
 	// 	cout<<m*4+2<<" "<<m*4+4<<" "<<m*4+1;
 	// }
 	// cout<<"\n";
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

