//https://codeforces.com/problemset/problem/486/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti n ;
    cin >> n ;
    if(n % 2 != 0) cout << "-" << (n/2) + 1 ;
    else cout << n/2 ;
}
