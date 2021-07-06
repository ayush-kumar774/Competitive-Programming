//https://codeforces.com/contest/811/problem/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti a , b , i = 1 ;
    cin >> a >> b ;
    while(i != 0)
    {
        if(i > a)
            {
                cout << "Vladik" ;
                 return 0 ;
            }
        else
            {
                 a = a - i ;
                  i++;
            }
        if (i > b)
            {
                cout << "Valera";
                 return 0 ;
            }
        else
            {
                b = b - i;
                i++ ;
            }
    }
    return 0 ;
}
