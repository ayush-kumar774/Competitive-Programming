//https://codeforces.com/problemset/problem/1/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        aakriti n , m , a ;
        cin >> n >> m >> a ;
        aakriti res = ceil(n / (double)a) * ceil(m / (double)a);
        cout << res << endl ;
}