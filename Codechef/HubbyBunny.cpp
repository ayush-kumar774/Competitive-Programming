//https://www.codechef.com/problems/HOF3
#include <bits/stdc++.h>
using namespace std;
int main() {

     long long int t;
     cin>>t;
     while(t--){


     	long long int a,b,c,d,e,f;
     	cin>>a>>b>>c>>d>>e>>f;

     	double result=(sqrt(((d-a)*(d-a))+((b-e)*(b-e))));

        double  value=c+f;

        if(result==value)
     	cout<<"tangential"<<endl;

     	if(result>value)
     	  cout<<"not overlapping"<<endl;


     	if(result<value)
     	cout<<"overlapping"<<endl;







     }
}
