#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define vi vector<int>
#define vl vector<lli>
#define mii map<int,int>
#define all(a) (a).begin(), (a).end()
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<endl;
#define pL(s) for(auto i:s) cout<<i<<" "; cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	vector<lli> p(n+1);
	if(n==4)
	{
		int a1,a2,a3,a4;
	 	cout<<"? 1 2 3"<<endl;
	 	cin >> a1;
	 	p[4]=10-a1;
	 	cout<<"? 1 2 4"<<endl;
	 	cin >> a2;
	 	p[3]=10-a2;
	 	cout<<"? 1 3 4"<<endl;
	 	cin >> a3;
	 	p[2]=10-a3;
	 	p[1] = 10-p[4]-p[2]-p[3];
	 	cout<<"! ";
	 	plist1(p,n);
	 	return;
	}
	int a1,a2,a3,a4;
 	cout<<"? 1 2 3"<<endl;
 	cin >> a1;
 	cout<<"? 1 2 4"<<endl;
 	cin >> a2;
 	cout<<"? 1 3 4"<<endl;
 	cin >> a3;
 	cout<<"? 2 3 4"<<endl;
 	cin >> a4;
 	p[4] = (a4+a3+a2-2*a1)/3;
 	p[3] = p[4]-a2+a1;
 	p[2] = p[4]-a3+a1;
 	p[1] = p[4]-a4+a1;
 	lli sum = p[1]+p[2]+p[3]+p[4];
 	for(int i = 5; i<n; i++)
 	{
 		cout<<"? 1 2 "<<i<<endl;
 		int x;
 		cin >> x;
 		p[i] = x-p[1]-p[2];
 		sum+=p[i];
 	}
 	p[n]=1LL*n*(n+1)/2-sum;
 	cout<<"! ";
 	plist1(p,n);
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

