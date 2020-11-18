//https://www.hackerrank.com/challenges/s10-basic-statistics/problem
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    aakriti num ;
    cin >> num ;
    float sum, mode ;
    vector<aakriti>v(num);
    for(auto &x: v) cin >> x ;
    for(auto x : v) sum+= x;
    mode = sum / num;
    printf("%.1f", mode);
}
