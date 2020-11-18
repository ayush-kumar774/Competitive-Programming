//https://codeforces.com/contest/1195/problem/B
#include<bits/stdc++.h>
using namespace std ;
#define endl "\n"
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti noOfmoves , remaining, eaten ;
    cin >> noOfmoves >> remaining;

    if(noOfmoves*(noOfmoves+1) /2 == remaining)
    {
        cout << 0 ;
    }
    else
    {
        for(aakriti i =0; i <noOfmoves; i++)
        {
            if ( (i * i +3 * i == 2*( remaining + noOfmoves)) )
            {
                 cout << noOfmoves - i ;
                 break ;
            }
        }
    }
    return 0 ;
}
