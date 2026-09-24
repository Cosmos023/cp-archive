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
	vector<int> a(n+1);
 	for(int i=1; i<=n; i++)
 	{
 		cin >> a[i];
 	}
	int m = -1;
	string ans = "";
	int l = 1, r=n;
	while(m<max(a[l],a[r]))
	{
		if(m < min(a[l],a[r]))
		{
			if(l==r){ans+='L'; break;}
			if(a[l]==a[r])
			{
				int k = a[l], il = 0, ir = 0;
				while(a[l+il]<a[l+il+1]) il++;
				while(a[r+ir-1]>a[r+ir]) ir--;
				// cout<<il<<" "<<ir<<"\n";
				if(il>abs(ir))
				{
					for(int i = 0; i<=il; i++) ans+='L';
				}
				else for(int i = 0; i<=abs(ir); i++) ans+='R';
				break;
			}

			if(a[l]<a[r]) 
			{
				m = a[l];
				l++; ans+='L';
			}
			else
			{
				m = a[r];
				r--; ans+='R';
			}
		}
		else if(m<a[l])
		{
			m = a[l];
			l++; ans+='L';
		}
		else if(m<a[r])
		{
			m = a[r];
			r--; ans+='R';
		}
		if(l>n || r<1) break;
	}
	cout<<ans.size()<<"\n"<<ans<<"\n";
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

