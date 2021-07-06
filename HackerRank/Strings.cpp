//https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1 ;
    cin >> s >> s1 ;
    cout << s.size() << " " << s1.size() << endl ;
    cout << s+s1 << endl ;
    char c ;
    c = s[0] ;
    s[0] = s1[0] ;
    s1[0] = c ;
    cout << s << " " << s1 << endl ;
}
