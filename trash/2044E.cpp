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

lli binpow(lli x, lli n) {
    if (n == 0) return 1;
    lli res = binpow(x, n / 2);
    if (n % 2)
        return res * res * x;
    return res * res;
}

void solve()
{
	lli k,l1,r1,l2,r2;
	cin >> k>>l1>>r1>>l2>>r2;
	lli ans = 0;
	if(r2<l1 || r1<l2) ans = 0;
	else if(l1<=l2 && r1>=r2) ans=(r2-l2+1);
	else if(l1>=l2 && r1<=r2) ans=(r1-l1+1);
	else if(l1>=l2 && r1>=r2) ans=(r2-l1+1);
	else if(l1<=l2 && r1<=r2) ans=(r1-l2+1);
	// cout<<ans< <" ans\n";
	lli rh = 1;
	lli n = 1;
	while((rh = binpow(k, n))<=r2)
	{
		n++;
		lli st = (l2>rh)?((l2+rh-1)/rh*rh):rh;
		lli en = r2/rh*rh;
		// cout<<st<<" "<<en<<" "<<n<<" "<<rh<<" "<<endl;
		if(st<l2) continue;
		st/=rh; en/=rh;
		// for(lli i = st; i<=r2; i+=rh)
		// {
		// 	lli x = i/rh;
		// 	if(x>=l1 && x<=r1) ans++;
		// }
		if(en<l1 || r1<st) ans += 0;
		else if(l1<=st && r1>=en) ans+=(en-st+1);
		else if(l1>=st && r1<=en) ans+=(r1-l1+1);
		else if(l1>=st && r1>=en) ans+=(en-l1+1);
		else if(l1<=st && r1<=en) ans+=(r1-st+1);

		// cout<<st<<" "<<en<<" "<<n<<" "<<rh<<" "<<endl;
	}
	cout<<ans<<"\n";
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