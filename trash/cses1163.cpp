#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int x, n;
	cin >> x >> n;
	multiset<int> st;
	multiset<int> gaps;
	st.insert(x);
	st.insert(0);
	gaps.insert(x);
	int y = 0;
	int z = x;
	int M = -1;
	while(n--)
	{
		int p;
		cin>>p;
		auto k = st.upper_bound(p);
		auto l = prev(k, 1);
		// cout<<(*l-*k)<<"\n";
		gaps.erase(gaps.lower_bound(*k-*l));
		gaps.insert(*k-p);
		gaps.insert(p-*l);
		st.insert(p);

		cout<<*gaps.rbegin()<<" ";
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