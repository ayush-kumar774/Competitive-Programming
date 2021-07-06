//https://atcoder.jp/contests/abc164/tasks/abc164_b
#include<bits/stdc++.h>
using namespace std;
bool check (long long a )
{
  if (a == 0 or a < 0 )
  {
    return true;
  }
  else return false;
}
int main()
{
  long long tasHealth, tasStrength, aikHealth, aikStrength ;
  cin >> tasHealth >> tasStrength >> aikHealth >>aikStrength ;
  char ch ;
  while(1){
    aikHealth -= tasStrength;

    if(check(aikHealth))
    {
      ch = 't' ;

      break;
    }

    tasHealth -= aikStrength;

    if(check(tasHealth)) {
      ch = 'a' ;
      break;
    }
  }

  // cout << tasHealth << " " << aikHealth << endl ;
  if(ch == 'a') {
    cout << "No\n";
  }
  else cout <<"Yes\n";
}
