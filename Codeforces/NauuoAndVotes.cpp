//https://codeforces.com/problemset/problem/1173/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    long long int x = 0 , y = 0 , z = 0 ;
    cin >> x >> y >> z ;
    long long int first = x + z - y ;
    long long int second = x - y - z ;
    if ( first > 0 and second > 0 )
    {
        cout << "+" << endl ;
    }
    else if ( first < 0 and second < 0 )
    {
        cout << "-" << endl ;
    }
    else if( first == 0 and second == 0 )
    {
        cout << "0" << endl ;
    }
    else
    {
        cout << "?" << endl ;
    }
}
