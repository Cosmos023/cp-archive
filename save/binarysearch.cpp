#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> a = {2,3,5,5,5,6,7,10};
	int lb = 0;
	int ub = a.size()-1;
	int key = 9;
	int mid=-1;
	int ans = -1;
	while(lb<=ub)
	{
		mid = (lb+ub)/2;
		if(a[mid]<=key)
		{
			ans = mid;
			lb=mid+1;
		}
		else
			ub = mid-1;
	}
	cout << ans;
}