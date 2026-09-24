#include <bits/stdc++.h>
using namespace std;

int cc(int amt, vector<int>& coins)
{
    if(amt==0) return 1;
    if(amt<0) return 0;
    int sum = 0;
    for(int& c:coins)
    {
        sum+=(cc(amt-c, coins));
    }
    return sum;
}

int change(int amount, vector<int>& coins) 
{
    return cc(amount, coins);
}  

int main()
{
    int amt = 5;
    vector<int> coins = {1,2,5};
    cout<<change(amt,coins);
}