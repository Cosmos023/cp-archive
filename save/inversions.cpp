#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int upperbound(vector<int>& C, int x) // returns index of element in C just larger than x using binary search
{
	int l = 0, r = C.size()-1;
	int UB = C.size();
	while(l<=r)
	{
		int mid = (l+r)/2;
		if(C[mid]>=x)
		{
			UB = mid;
			r = mid-1;
		}
		else
			l = mid+1;
	}
	return UB;
}

int inv(vector<int>& A)
{
	if(A.size()<=1) return 0;

	// Copying first half of A into B
	int sz_B = A.size()/2;
	vector<int> B(sz_B);
	for(int i = 0; i < sz_B; i++)
		B[i] = A[i];

	// Copying second half of A into C
	int sz_C = A.size()-sz_B;
	vector<int> C(sz_C);
	for(int i = 0; i < sz_C; i++)
		C[i] = A[i + sz_B];

	int ans = 0;
	ans = ans+inv(B)+inv(C);
	sort(B.begin(), B.end());
	sort(C.begin(), C.end());

	for(int x : B)
	{
		ans += upperbound(C, x);
	}
	return ans;
}

int main()
{
	vector<int> A = {3, 5, 4, 1, 2};
	/* 
	  7 inversions
		3,1
		3,2
		5,4
		5,1
		5,2
		4,1
		4,2
	*/
	cout << inv(A);  // prints 7 
}