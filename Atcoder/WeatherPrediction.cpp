//https://atcoder.jp/contests/abc141/tasks/abc141_a
#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     string s ;
     cin >> s ;
     if(s[0] == 'S') cout << "Cloudy" << endl ;
     else if(s[0] == 'C') cout << "Rainy" << endl ;
     else cout << "Sunny" << endl;
}