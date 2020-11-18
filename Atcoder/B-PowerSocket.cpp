//https://atcoder.jp/contests/abc139/tasks/abc139_b
#include<bits/stdc++.h>
using namespace std;
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(0);
       int a , b ;
       cin >> a >> b ;
       if(b % a == 0) cout << b/a << endl ;
       else 
       {
                b = b/a + 1 ;
                cout << b << endl ;
       } 
}