#include<iostream>
using namespace std;

int main()
{
    int  s, t;
    int app=0, ora=0;
    int a, b;
    int m, n;
    
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    
    int apple[m], orange[n], store_apple[m], store_orange[n];
    
    for(int i=0; i<m; i++)
    {
        cin>>apple[i];
        store_apple[i]=apple[i]+a;
        if(store_apple[i]>=s && store_apple[i]<=t)
        app++;
    }
    
    for(int i=0; i<n; i++)
    {
        cin>>orange[i];
        store_orange[i]=orange[i]+b;
        if(store_orange[i]>=s && store_orange[i]<=t)
        ora++;
    }

   cout<<app<<endl;
   cout<<ora<<endl;

return 0;

}
