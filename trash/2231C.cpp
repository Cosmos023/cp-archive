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
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

void solve()
{
	int n;
	cin >> n;
	vector<lli> a(n);
 	for(int i=0; i<n; i++)
 	{
 		cin >> a[i];
 	}
 	sor(a);
 	set<lli> s;
 	lli k = a[0];
 	s.insert(a[0]);
 	while(k>1)
 	{
 		if(k%2) k++;
 		else k/=2;
 		s.insert(k);
 	}
 	for(int i=1; i<n; i++)
 	{
 		lli k = a[i];
 		set<lli> s1;
 		s1.insert(k);
 		while(k>1)
	 	{
	 		if(k%2) k++;
	 		else k/=2;
	 		s1.insert(k);
	 	}
	 	for(auto& c:s)
	 	{
	 		if(s1.find(c)==s1.end()) s.erase(c);
	 	}
 	}
 	if(s.size()==1)
 		s.insert(2);
 	// pL(s);

 	auto it = --s.end();
 	lli x1 = *it;
 	it--;
 	lli x2 = *it;
 	lli ans1 = 0, ans2=0;
 	for(int i=0; i<n; i++)
 	{
 		k = a[i];
 		while(k!=x1)
	 	{
	 		if(k%2) k++;
	 		else k/=2;
	 		ans1++;
	 	}
 	}
 	for(int i=0; i<n; i++)
 	{
 		k = a[i];
 		while(k!=x2)
	 	{
	 		if(k%2) k++;
	 		else k/=2;
	 		ans2++;
	 	}
 	}
 	cout<<min(ans1,ans2)<<"\n";
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

