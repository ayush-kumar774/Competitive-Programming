//https://codeforces.com/contest/734/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    long long int n = 0 , A = 0 , D = 0 ;
    string s ;
    cin >> n ;
    cin >> s ;
    A = count( s.begin(), s.end(), 'A' ) ;
    D = count( s.begin(), s.end(), 'D' ) ;
    if ( A == D )
    {
        cout << "Friendship" << endl ;
    }
    else if ( A > D )
    {
        cout << "Anton" << endl ;
    }
    else
    {
        cout << "Danik" << endl ;
    }
}
