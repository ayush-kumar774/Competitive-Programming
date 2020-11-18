//https://codeforces.com/problemset/problem/483/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int a{0} , b{0} ;
    cin >> a >> b ;
    if(b - a <= 1)
    {
        cout << -1 ;
    }
    else if(a % 2 == 0)
    {
        cout << a << " " << a + 1 << " " << a + 2;
    }
    else if( b - a + 1 > 3)
    {
        cout << a + 1 << " " << a + 2 << " " << a + 3 ;
    }
    else
    cout << -1 ;
}
