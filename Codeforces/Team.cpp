//http://codeforces.com/contest/231/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int number , count = 0 ;
    cin >> number ;
    while (number --)
    {
        int petya, vasya , tonya ;
        cin >> petya >> vasya >> tonya ;
        if ( (petya == 1&& vasya == 1) || (petya == 1 && tonya == 1) || (vasya == 1 && tonya == 1) )
        {
            count ++ ;
        }
    }
    cout << count ;
}
