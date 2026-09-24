#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())
#define plist(V,n) for(int i=0;i<(n);i++)cout<<(V)[i]<<" ";cout<<"\n";
#define plist1(V,n) for(int i=1;i<=(n);i++)cout<<(V)[i]<<" ";cout<<"\n";

void solve()
{
	int n;
	cin >> n;
	vector<int> vo;
	vector<int> ve;
 	for(int i=0; i<n; i++)
 	{
 		int x;
 		cin >> x;
 		if(x%2==0)
 			ve.push_back(x);
 		else
 			vo.push_back(x);
 	}
 	sor(vo);
 	sort(ve.begin(),ve.end(),greater<>());
	vector<lli> veps;
 	int nE = ve.size();
 	int nO = vo.size();
 	veps.push_back(0LL);
 	if(nE>0)
		veps.push_back(ve[0]);
 	for(int i = 1; i<ve.size(); i++)
 	{
 		veps.push_back(veps[veps.size()-1]+ve[i]);
 	}
 	if(vo.size()==0)
 	{
 		for(int k = 1; k<=n; k++) cout << "0 ";
 		cout << "\n";
 		return;
 	}

 	int oMax = vo[nO-1];
 	int oP = 1;
 	int aE = 0;

 	for(int k = 1; k<=n; k++)
 	{
 		lli sum = oMax;

 		int left = k-1;
 		int odd_left = nO-1;
 		int even_used = min(nE,k-1);
 		int remaining_space = left - even_used;
 		if(remaining_space%2 != 0)
 		{
 			even_used--;
 			remaining_space++;
 		}

 		if(even_used>=0 && odd_left>=remaining_space && (remaining_space)%2==0)
 		{
 			sum+=veps[even_used];
 			cout << sum << " ";
 		}
 		else
 			cout << "0 ";
 	}
 	cout << "\n";


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