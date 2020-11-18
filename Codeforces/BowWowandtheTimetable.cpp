//https://codeforces.com/contest/1204/problem/A
#include<bits/stdc++.h>
using namespace std ;
#define aakriti long long int
#define endl "\n"
int main()
{
   string s , b ="1";
   cin >> s ;
   int i = 0;
   aakriti decimal{0}, counter{0};
   if(s == b)
    cout << 0 << endl;
   else
    {
      std::reverse(s.begin(), s.end());
     //  cout << s ;
       for(int i = 0; i < s.size(); i++)
       {
           if(s[i] == '1')
            decimal += (s[i]-48) * pow(2,i);
        }
    //    cout << decimal << endl ;
        aakriti temp = decimal;
        while(temp >= pow(4,i))
        {
            temp = decimal - pow(4,i);
            i++;
            counter++;
        }
        cout << counter << endl ;
   }

}
