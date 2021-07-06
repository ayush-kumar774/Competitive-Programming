//https://www.codechef.com/problems/FLOW013
#include<bits/stdc++.h>
using namespace std ;
#define lol long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    lol testcase ;
    cin >> testcase ;
    while(testcase --)
    {
        lol a , b , c ;
        cin >> a >> b >> c ;
        (a+b+c == 180) ? cout << "YES" << endl : cout << "NO" << endl ;

    }
}
