#include <bits/stdc++.h>
using namespace std;
 
using lli = long long int;
#define vi vector<int>
#define mii map<int,int>
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

vector<int> h(100005);
vector<int> dp(100005, -1);
int n, K;

int ans(int k)
{
	if(dp[k]!=-1) return dp[k];
	if(k==1) return 0;
	int cost = ans(k-1)+abs(h[k]-h[k-1]);
	for(int i = 2; i<=K;i++)
	{
		if(k>i)
			cost = min(cost, ans(k-i)+abs(h[k]-h[k-i]));
	}
	dp[k]=cost;
	return cost;
}

void solve()
{
	cin >> n >> K;
 	for(int i=1; i<=n; i++)
 	{
 		cin >> h[i];
 	}
 	// cout<<"fe"<<endl;
 	cout<<ans(n);
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