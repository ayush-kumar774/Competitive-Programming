/*
   author: canis_majoris123
   time : 15:53
   Date : 13 - 08 - 2019
*/
// I Love A Goswami
//https://codeforces.com/problemset/problem/467/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     aakriti countRoom{0}, number;
     cin >> number ;
     while(number--)
     {
         aakriti a, b ;
         cin >> a >> b;
         if (a+1 < b)

         {
             countRoom++;
         }
     }
     cout << countRoom << endl ;
}

