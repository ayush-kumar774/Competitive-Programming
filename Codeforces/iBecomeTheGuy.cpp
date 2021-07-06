/*
   author: canis_majoris123
   time : 16:30
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
    aakriti number ;
    cin >> number ;
    aakriti x , y ;
    set<aakriti> s;
    cin >> x;
    while(x--)
    {
        aakriti a ;
        cin >> a ;
        s.insert(a);
    }
    cin >> y ;
    while(y--)
    {
        aakriti b ;
        cin >> b ;
        s.insert(b);
    }
    if(s.size() == number)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

}
