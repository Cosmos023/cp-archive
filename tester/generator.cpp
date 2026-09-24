#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vll = vector<ll>;
using si = set<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using ld = long double;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(a) sort((a).begin(),(a).end())
#define pL1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define pL(s) for(auto const& i:s) cout<<i<<" "; cout<<"\n";
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rnd(int l, int r)
{
  return uniform_int_distribution<int>(l, r)(rng);
}

void ask_list(ll n, ll l_a, ll r_a)
{
	cout<<n<<endl;
	for(int i = 0; i<n; i++)
	{
		cout<<rnd(l_a, r_a)<<" ";
	}
	cout<<endl;
}

void ask_string(int n, char l_c = 'A', char r_c = 'Z')
{
    string s = "";
    for(int i = 0; i < n; i++)
    {
        s += (char)rnd(l_c, r_c);
    }
    cout << s << endl;
}

void ask(int t, ll l_n, ll r_n)
{
	cout<<t<<endl;
	for(int i = 0; i<t; i++)
	{
		ll n = rnd(l_n, r_n);
		ask_list(n, 1, n);
	}
}

int main(int argc, char* argv[])
{
	if(argc!=1)
	{
		int seed = atoi(argv[1]);
	  rng.seed(seed);
	}
	int t = 1;
	ll l_n = 'A', r_n = 'Z';
	int k = rnd(1, 10);
	cout<<k<<endl;
	ask_string(k, l_n, r_n);
	ask_string(k, l_n, r_n);
}

