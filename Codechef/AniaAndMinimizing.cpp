//https://codeforces.com/problemset/problem/1230/B
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
       int  n = 1 , sum ;
        // aakriti n , k , s;
        // cin >> n >> k >> s ;
        while(n < 100)
        {
                if(n % 3 == 2 and n % 4 == 3 and n % 5 == 4)
                {
                        sum = n ;
                        break;
                }
                n++;
        }
        cout << sum << endl ;
}