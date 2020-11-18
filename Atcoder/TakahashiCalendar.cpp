//https://atcoder.jp/contests/jsc2019-qual/tasks/jsc2019_qual_a
#include<bits/stdc++.h>
using namespace std;
int main()
{
      int m , d , count{0} ;
      cin >> m >> d ;
      for(int i = 10 , j = 10; i <=m, j <= d; j++)
      {
              if(i == j/10 * j % 10)
              {
                      count ++ ;
                      i++;
              }
      }  
      cout << count ;
}