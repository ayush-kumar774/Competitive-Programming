//https://codeforces.com/contest/1234/problem/0
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
     int testcase;
     cin >> testcase;
     while(testcase--)
     {
             int number ;
             aakriti sum = 0 ;
             cin >> number;
             aakriti num = number;
             while(num--)
             {
                     int x ;
                     cin >> x;
                     sum += x ;
             }
             if(sum % number == 0) cout << sum / number << endl ;
             else cout << sum / number + 1 << endl ;
     }       
}