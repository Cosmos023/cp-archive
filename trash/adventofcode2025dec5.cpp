#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n = 186;
	vector<lli> v; 
	while(n--)
	{
		string s;
		cin >> s;
		if(!size(s))
			break;
		int i = 0;
		for(i = 0 ; i<s.size();i++)
		{
			if(s[i]=='-') break;
		}
		lli a1 = stoll(s.substr(0,i));
		lli a2 = stoll(s.substr(i+1));
		v.push_back(a1);
		v.push_back(a2);
	// cout << v.size() << "d\n";
	}
// cout << "he" << endl;
	// for(lli i : v) cout << i << " ";
	lli ans = 0;
	vector<pair<lli,lli>> vp;
	// map<lli,int> done;
	for(int i = 0; i<v.size(); i+=2)
	{
			vp.push_back({v[i],v[i+1]});
		// lli max_overl = 0;
		// for(int i = 0 ; i<v.size(); i+=2)
		// {
		// }
		// for(lli j = v[i]; j<=v[i+1]; j++)
		// {
		// 	// // cout << j << "\n";
		// 	// if(done.find(j)==done.end())
		// 	// {
		// 	// 	ans++;
		// 	// 	// cout << j << endl;
		// 	// 	done.insert(j);
		// 	// }
		// 	if(done[j]!=1)
		// 	{
		// 		done[j] = 1; ans++;
		// 	}
		// }
	}



	// cout << vp.size() << "d\n";
	sort(vp.begin(),vp.end());
	vector<pair<lli,lli>> vd;
	ans = vp[0].second-vp[0].first+1;
	vd.push_back(vp[0]);
	for(int i = 1; i<vp.size(); i++)
	{
		// cout << "JJJJJJJJJJJJ\n";
		if(vp[i].first>vd[vd.size()-1].second)
		{
			vd.push_back(vp[i]);
			ans += (vp[i].second-vp[i].first+1);
		}
		else if(vp[i].second<=vd[vd.size()-1].second)
		{

		}
		else
		{
			ans += ((vp[i].second-vd[vd.size()-1].second));
			vd[vd.size()-1].second = vp[i].second;
	// cout << ans << "ans\n ";
			// cout << (vp[i].second-vd[vd.size()-1].second)<< " here\n" ;
	// cout << ans << "ans\n";
		}
	// 	for(int i = 0; i<vd.size(); i++)
	// 	{
	// 		cout << vd[i].first << " " << vd[i].second << "\n";
	// 	}
	// cout << ans << "ans\n";
	}

	cout << ans;
}