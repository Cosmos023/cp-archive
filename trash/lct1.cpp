#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int rnd(int l, int r) {
    return uniform_int_distribution<int>(l, r)(rng);
}

void dutch_national_flag(vector<int>& a) {
    int low = 0;
    int mid = 0;
    int high = (int)a.size() - 1;

    while (mid <= high) {
        if (a[mid] == 0) {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1) {
            mid++;
        }
        else { // a[mid] == 2
            swap(a[mid], a[high]);
            high--;
        }
    }
}
void naive(vector<int>& a)
{
    // sort(a.begin(),a.end());
    vector<int> f(3,0);
    for(int c:a) f[c]++;
    int k = 0;
    for(int i = 0; i<3; i++)
    {
        for(int j=0;j<f[i];j++)
        {
            a[k]=i;
            k++;
        }
    }
}

int main() {
    const int N = 100000000;  

    vector<int> a(N);

    // Generate random input
    for (int i = 0; i < N; i++)
        a[i] = rnd(0, 2);

    vector<int> b = a;

    auto start1 = high_resolution_clock::now();
    naive(b);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = chrono::duration<double>(stop1 - start1);
    cout << "Time taken: " << duration1.count() << " s\n";

    auto start = high_resolution_clock::now();
    dutch_national_flag(a);
    auto stop = high_resolution_clock::now();
    auto duration = chrono::duration<double>(stop - start);
    cout << "Time taken: " << duration.count() << " s\n";

    return 0;
}