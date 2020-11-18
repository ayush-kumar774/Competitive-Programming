#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int a, b, c, d, n ;
    cin >> n ;
    while(1)
     {
        n++ ;
        a = n / 1000 ;
        b = (n % 1000) / 100 ;
        c = (n % 100) / 10 ;
        d = (n % 10) ;
        set<int> v;
        v.insert(a) ;
        v.insert(b) ;
        v.insert(c) ;
        v.insert(d) ;
        if(v.size() == 4)
           {
              break ;
            }
         else
             n ++ ;
}
      cout << n ;
}
