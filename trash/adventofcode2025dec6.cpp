#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int

 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	lli ans = 0;
	vector<string> v;
	vector<int> vi;
	int k = 3;
	string s;
	for(int i=0; i<k; i++)
	{
		getline(cin, s);
		v.push_back(s);
	}
	getline(cin, s);
	v.push_back(s);
	for(int i = 0; i<v.size(); i++) cout << v[i] << "\n";

	cout << ans;
}