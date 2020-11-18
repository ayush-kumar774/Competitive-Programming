//https://codeforces.com/problemset/problem/1030/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int number, count = 0 ;
    cin >> number;
    while(number--)
    {
        int x ;
        cin >> x ;
        if( x == 1 )
        {
            count ++;
        }
    }
    if(count != 0)
    {
        cout << "HARD" <<endl;
    }
    else
        cout << "EASY" << endl ;
}
