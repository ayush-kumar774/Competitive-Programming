//https://codeforces.com/problemset/problem/52/A
#include<bits/stdc++.h>
using namespace std ;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti number , a;
    cin >> number ;
    aakriti n[4] = {0, 0, 0 , 0};
    for(int i = 0; i < number; i++)
    {
        cin >> a;
        n[a]++;
    }
//    cout << n[0] <<endl << n[1] << endl << n[2] << endl << n[3] << endl ;
    cout << int (number - max({n[1], n[2], n[3]}) ) << endl ;
}
