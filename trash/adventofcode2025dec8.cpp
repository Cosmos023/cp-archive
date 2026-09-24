#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define sor(a) sort((a).begin(),(a).end())

 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	// lli ans = 0;
	vector<string> vs;
	while(1)
	{
		string s;
		cin >> s;
		if(!size(s))
			break;
		vs.push_back(s);
	}
	vector<int> x;
	vector<int> y;
	vector<int> z;
	for(string st:vs)
	{
		int n1,n2,n3;
		replace(st.begin(), st.end(), ',', ' ');
		stringstream ss(st);
		ss >> n1>>n2>>n3;
		x.push_back(n1);
		y.push_back(n2);
		z.push_back(n3);
	}
	int n = x.size();
	vector<pair<int,int>> connected;
	vector<lli> connected_dist;
	int lim = 1000;
	int limc = 1000;
	while(lim--)
	{
		lli min_dist = LONG_MAX;
		int minp1=-1,minp2=-1;
		for(int i = 0; i<n; i++)
		{
			// cout << x[i] << " " << y[i] << " " << z[i] << "\n";
			for(int j = i+1; j<n; j++)
			{
				if(find(connected.begin(),connected.end(),make_pair(i,j))!=connected.end())
				{
					// cout<<"h";
					continue;
				}
				lli dist = 1LL*(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
				if(dist<min_dist)
				{
					min_dist=dist;
					minp1 = i;
					minp2 = j;
				}
			}
				// cout<<minp1<<" "<<minp2<<"\n";
		}
		connected.push_back({minp1,minp2});
		connected_dist.push_back(min_dist);
	}
	sor(connected_dist);
	vector<set<int>> vsi;
	for(auto i :connected)
	{
		cout << i.first+1 << " " << i.second+1 << "\n";
	}
	for(pair<int,int> p:connected)
	{
		int done = 0;
		for(int i = 0; i<vsi.size(); i++)
		{	
			if(vsi[i].find(p.first)!=vsi[i].end())
			{
				vsi[i].insert(p.second);
				done = 1;
				break;
			}
			else if(vsi[i].find(p.first)!=vsi[i].end())
			{
				vsi[i].insert(p.first);
				done = 1;
				break;
			}
			else
			{

			}
		}
		if(done==0)
		{
			set<int> si;
			si.insert(p.first); si.insert(p.second);
			vsi.push_back(si);
		}
	}

	vector<int> vsil;
	for(auto si:vsi)
	{
		vsil.push_back(si.size());
	}
	sor(vsil);
	for(int l:vsil)
		cout << l << " ";
	// cout<<connected_dist.size();
	// cout<<connected_dist[limc-1]*connected_dist[limc-2]*connected_dist[limc-3];
}