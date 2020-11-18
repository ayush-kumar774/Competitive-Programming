#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a , b , n ;
  cin >> a >> b >> n ;
  long long max = 0;
  for (int i = n ; i >= 1 ; i-- )
  {
    long long ans = floor(a*i / b) - (a ) * floor(i/ b);
     if(max < ans)
     {
       max = ans ;
     }
  }
  cout << max << endl;
  // A = P (1 + r/n) pow (nt)
}
