#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a, b, k , count = 0 ;
  cin >> k >> a >> b ;
  for(int i = a ; i <= b ; i++)
  {
    if( i % k == 0 )
    {
      count++;
      break;
    }
  }
  if(count) cout << "OK" << endl ;
  else cout << "NG" << endl ;
}
