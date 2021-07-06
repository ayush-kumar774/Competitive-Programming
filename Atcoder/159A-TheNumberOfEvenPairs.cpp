//https://atcoder.jp/contests/abc159/tasks/abc159_a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m ;
    cin >> n >> m ;
    long long ans = 0 ;
    ans = n * (n-1) / 2 ;
    ans += m * (m - 1) /2 ;
    cout << ans << endl ; 
}