//https://atcoder.jp/contests/abc124/tasks/abc124_a
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);    
    aakriti a, b ;
    cin >> a >> b ;
    if(a == b) cout << a + b << endl ;
    if (a-1 == b) cout << a + b << endl ;
    if (a - 1 > b) cout << 2 * a - 1 << endl ;
    if(b -1 > a) cout << 2*b - 1 << endl ;
    if (b -1 == a) cout << b + a << endl ;
}

