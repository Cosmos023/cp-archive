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
	vector<int> veps;
 	int nE = ve.size();
 	int nO = vo.size();
 	veps.push_back(0);
 	if(nE>0)
		veps.push_back(ve[0]);
 	for(int i = 1; i<ve.size(); i++)
 	{
 		veps.push_back(veps[veps.size()-1]+ve[i]);
 	}
 	// plist(veps, veps.size());
 	if(vo.size()==0)
 	{
 		for(int k = 1; k<=n; k++) cout << "0 ";
 		cout << "\n";
 		return;
 	}
 	int oMax = vo[vo.size()-1];
 	for(int k = 1; k<=n; k++)
 	{
 		if(ve.size() >= (k-1))
 		{
 			// cout << k-1 << "\n";
 			cout << oMax + veps[k-1] << " ";
 			continue;
 		}
 		int z = (nO-1);
 		int b = k-1-nE;
 		if(z>=b)
 		{
 			if(b%2==0)
 			{
	 			cout << oMax + veps[nE] << " ";
	 			continue;
	 		}
	 		else if(nE>1 && z>b)
	 		{
	 			cout << oMax + veps[nE-1] << " ";
	 			continue;
	 		}
	 		else
	 		{
	 			cout << "0 ";
	 			continue;
	 		}
 		}
 		else
 		{
 			if(z%2==1)
	 			cout << "0 ";
	 		else
	 			cout << oMax << " ";
 			// if(z%)
 		}
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