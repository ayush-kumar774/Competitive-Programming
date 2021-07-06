//https://codeforces.com/problemset/problem/977/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int number, k , a;
    cin >> number ;
    cin >> k;
    for(int i = 1; i <= k; i++)
    {
        if( number % 10 == 0 )
        {
            number/=10;
        }
        else
        {
            number-=1;
        }
    }
    cout << number;
}
