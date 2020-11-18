//http://codeforces.com/problemset/problem/69/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int num, sumx = 0, sumy = 0, sumz = 0 ;
    cin >> num ;
    while(num--)
    {
        int x , y, z ;
        cin >> x >> y >> z ;
        sumx += x;
        sumy += y;
        sumz += z;
    }
    if( sumx == 0 and sumy == 0 and sumz == 0 )
    {
        cout << "YES" ;
    }
    else
        cout << "NO" ;
}
