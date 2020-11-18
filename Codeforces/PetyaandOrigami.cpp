//https://codeforces.com/problemset/problem/1080/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti n , k ;
    cin >> n >> k ;
    aakriti red{0}, green{0}, blue{0};
    red = n * 2 ;
    green = n * 5 ;
    blue = n * 8 ;
    if(red % k == 0) red = red / k ;
    else red = red / k + 1 ;
    if(green % k == 0 ) green = green / k ;
    else green = green / k + 1 ;
    if(blue % k == 0) blue = blue / k ;
    else blue = blue / k + 1 ;
    cout << blue + red + green << endl ;
}
