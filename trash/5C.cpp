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
	string s; cin>>s;
	int c = 1, sz=0;
	int z = 0;
	vi st; st.push_back(-1);
	int b = 0;
	for(int i=0;i<s.size();i++)
	{
			if(s[i]=='(')
			{
				st.push_back(i);
			}
			else
			{
				if(st.size()==1)
				{
					st.clear(); st.push_back(i);
				}
				else
				{
					st.pop_back();
					if(i-st.back()==sz) c++;
					else if(i-st.back()>sz)
					{
						c=1; sz=i-st.back();
					}
				}
			}
	}
	cout<<sz<<" "<<c<<"\n";
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

