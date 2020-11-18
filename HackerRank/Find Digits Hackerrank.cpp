#include<iostream>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    { 
       int number;
       int a=0;
       cin>>number;
       while(number!= 0)
       {
           a = number%10;
           number/=10;
           cout<<a<<endl;
       }
    }

}
