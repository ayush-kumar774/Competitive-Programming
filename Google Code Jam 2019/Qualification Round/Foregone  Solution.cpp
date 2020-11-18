#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int testcase;
   cin>>testcase;
   while(testcase--)
   {
     string s1;
     int n, n1, n2, count=0;
     cin>>n;
     n1 = n/3;
     s1 = to_string(n1);
     for(int i=0; i<s1.size(); i++)
     {
        if(s1[i]==4)
        count++;
     }
      if(count==0)
      {
        cout<<n1<<" "<<n-n1;
        }
       else
       {
          n2 = n/3;
          n1 = n-n2;
          cout<<n1<<" "<<n2;
        }
    }
}
