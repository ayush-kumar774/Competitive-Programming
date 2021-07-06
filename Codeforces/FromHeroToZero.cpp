// //https://codeforces.com/contest/1175/problem/A
// #include<bits/stdc++.h>
// using namespace std;
// #define aakriti long long int
// int main()
// {
//         ios_base::sync_with_stdio(false);
//         cin.tie(0);
//         int testcase;
//         cin >> testcase;
//         while (testcase--)
//         {
//                 aakriti l , r , count{0};
//                 cin >> l >> r ;
//                 while(l > 0)
//                 {
//                         if(l % r == 0)
//                         {
//                                 l = l / r ;
//                                 count++;
//                         }
//                         else
//                         {
//                                 count += l % r;
//                                 l -= l % r ;
//                         }
                        
//                 }
//                 cout << count << endl ;
//         }
        
// }
//https://codeforces.com/contest/1234/problem/0
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
     aakriti testcase;
     cin >> testcase;
     while(testcase--)
     {
             aakriti number, sum{0}, x ;
             cin >> number ;
             while(number--)
             {
                     cin >> x ; sum = sum + x ;
             }
             cout << sum << endl ;
             cout << sum/number ; 
     }
}