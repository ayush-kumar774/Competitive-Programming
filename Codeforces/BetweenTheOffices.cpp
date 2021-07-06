//https://codeforces.com/problemset/problem/867/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , san{0}, sea{0};
    cin >> n ;
    string s ;
    cin >> s ;
    for(int i = n-1 ; i >= 0 ;i = i-1)
    {
        if(s[i] == 'F' && s[i-1] == 'S')
        {
            san++ ;
        }
        else if(s[i] == 'S' && s[i-1] == 'F')
        {
            sea++;
        }
    }
    cout << sea << endl ;
    cout << san << endl ;
    if(san > sea)
        cout << "YES" ;
    else
        cout << "NO" ;
}
