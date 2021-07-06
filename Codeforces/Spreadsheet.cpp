#include <bits/stdc++.h>
using namespace std;

int main()
{
  char s[20],col[20],row[20];
  int X, Y;
  int T;
  cin >> T;
  while(T--)
  {
    scanf("%s", s);
    if(sscanf(s, "R%dC%d", &X, &Y) == 2)
    {
      string C;
      while(Y)
      {
        C += (Y-1) % 26 + 'A';
        Y = (Y-1) / 26;
      }
      reverse(C.begin(), C.end());
      cout << C << X << endl;
    }
    else
    {
      Y = 0 ;
      int i ;
      for( i = 0 ; s[i] >= 'A' && s[i] <= 'Z'; ++i)
        Y = Y * 26 + s[i] - 'A' + 1;
      printf ("R%sC%d\n", s + i, Y) ;
    }
  }
}
