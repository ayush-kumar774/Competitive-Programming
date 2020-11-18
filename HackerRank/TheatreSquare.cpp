//http://codeforces.com/problemset/problem/1/A
#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int n , m , a ,p ;
    cin >> n >> m >> a ;
    p = min( {m, n, a}, comp );
    cout << p << endl ;
}
