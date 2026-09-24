#include <bits/stdc++.h>
using namespace std;

using ld = long double;
using ll = long long;
const int mod = 1e9+7;

void solve()
{
	ll N; cin >> N;
	ll a, b; cin>>a>>b;
	vector<ld> P(N+1, -1), C(N+1, 0);
	vector<ld> Ps(N+1, 0), Cs(N+1, 0);
	for(int i = 0; i < a; i++)
	{
		ll z; cin>>z; P[z] = 0;
	}
	for(int i = 0; i < b; i++)
	{
		ll z; cin>>z; P[z] = 1;
	}
	Ps[N]=P[N]=0;
	C[N]=1;
	for(int x = N-1; x>=1; x--)
	{
		if(P[x]==-1)
		{
			P[x]=0;
			// for(int i = x+1; i <= N-1; i++)
			// {
			// 	P[x]+=P[i];
			// 	C[x]+=C[i];
			// }
			P[x]+=Ps[x+1];
			C[x]+=Cs[x+1];
			C[x]+=1;
			P[x]/=(N-x);
			C[x]/=(N-x);
		}
		Cs[x]=C[x]+Cs[x+1];
		Ps[x]=P[x]+Ps[x+1];
		cerr<<x<<" "<<P[x]<<endl;
	}
	for(int i = 1; i<=N; i++) cerr<<P[i]<<" "; cerr<<endl;
	for(int i = 1; i<=N; i++) cerr<<C[i]<<" "; cerr<<endl;
	for(int i = 1; i<=N; i++) cerr<<Ps[i]<<" "; cerr<<endl;
	cout<<fixed<<setprecision(15)<<P[1]/(1-C[1])<<endl;
}

int main()
{
	int t; cin>>t; while(t--) { solve(); }
}