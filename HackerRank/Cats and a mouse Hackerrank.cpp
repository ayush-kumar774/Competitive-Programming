#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
      int cat1, cat2, mouse;
      cin>>cat1>>cat2>>mouse;
      int cat1pos = abs(mouse-cat1);
      int cat2pos = abs(mouse-cat2);
      if(cat1pos<cat2pos)
      {
          cout<<"Cat A";
      }
      if(cat1pos>cat2pos)
      {
          cout<<"Cat B";
      }
      if(cat1pos==cat2pos)
      {
          cout<<"Mouse C";
      }
    }
    

}
