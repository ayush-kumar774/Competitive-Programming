//https://codeforces.com/contest/124/problem/A
#include<bits/stdc++.h>
using namespace std ;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti n, f, b, c{0} ;
    cin >> n >> f >> b;
    for(int i = 1 ; i <= n; i++)
    {
        if(i -1 >= f and n - i <= b) c++;
    }
    cout << c << endl ;
}
