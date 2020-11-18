//https://codeforces.com/problemset/problem/75/A
#include<bits/stdc++.h>
#define aakriti long long int
using namespace std ;
int withoutZero(aakriti ayush)
{
    string s = to_string(ayush) ;
    string ans = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0')
            ans += s[i];
    }
    ayush = stoi(ans) ;
    return ayush ;
}
int main()
{
    aakriti a , b , sum{0};
    cin >> a >> b ;

    sum = a + b;

    a = withoutZero(a) ;
    b = withoutZero(b) ;
    sum = withoutZero(sum) ;

    (sum == a + b) ? cout << "YES" << endl : cout << "NO" << endl ;
    //205 220
    //25
}
