//https://codeforces.com/problemset/problem/2/A
#include<bits/stdc++.h>
using namespace std ;
#define aakriti long long int
int main()
{
    aakriti number, sum{0}, sum2{0} , cnt{1}, cnt2{0} ,r;
    cin >> number;
     pair <string, int>  p[number];
    for(int i = 0; i < number; i++)
    {
         cin >> p[i].first >> p[i].second;
    }

    sum = p[0].second;
    for(int i = 1; i < number; i++)
    {
         if(p[0].first == p[i].first )
         {
             sum += p[i].second;
             cnt++;
         }
         else if(p[0].first != p[i].first)
         {
             sum2 += p[i].second;
             cnt2++;
             r = i;
         }
    }
    // cout << sum << endl << sum2 << endl ;
    // cout << cnt << endl << cnt2 << endl ;
    if(sum > sum2) cout << p[0].first;
    else if(sum2 < sum) cout << p[r].first;
    else if(sum == sum2 and cnt < cnt2) cout << p[0].first;
    else if(sum == sum2 and cnt > cnt2) cout<< p[r].first;
}
