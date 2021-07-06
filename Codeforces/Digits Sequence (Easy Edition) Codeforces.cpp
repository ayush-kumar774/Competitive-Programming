#include<bits/stdc++.h>
using namespace std;
int main()
{
  // ios_base::sync_with_studio(false);
   //cin.tie(0);
   
   int n;
   cin >> n;
   
   string x = "" ;
   for(int i = 0; i <= 10000; i++)
   {
   	  x += to_string(i);
   }
   
   cout << x[n] ;
}
