// In the name of Aadi Shakti

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{

}

int32_t main()
{
    fast;
    int testcase  = 1 ;
   // cin >> testcase ;
    while(testcase--)
    {
        solve();
    }
    return 0 ;
}
// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// int32_t main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,q;
//         cin>>n>>q;
//         string s;
//         cin>>s;
//         int arr[26]={0};
        
//         for(int i=0;i<n;i++)
//         { //cout<<s[i]*1-97<<"***"<<endl;
//             arr[s[i]*1-97]++;
//         }
//        /* for(int i=0;i<26;i++)
//         {
//             cout<<arr[i]<<endl;
//         }*/
//         while(q--)
//         {
//             int c;
//             cin>>c;
        
        
//         int count=0;
        
//         for(int i=0;i<26;i++)
//         {
//             if(arr[i]>c)
//             count+=abs(c-arr[i]);
            
//         }
//         cout<<count<<endl;}
        
//     }
//     return 0;
// }\


 /* #include<bits/stdc++.h>
 #define int long long
 using namespace std;
 int32_t main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)
         cin>>arr[i];
         int min=8,max=1;
         int diff[n-1];
         int count2=0;
         for(int i=0;i<n-1;i++)
         {
             diff[i]=arr[i+1]-arr[i];
         
         }
         int count=1;
         
         for(int i=0;i<n-1;)
         {
             
             int flag=0;
          while(diff[i]<=2)
          {count++;
          //cout<<i<<"--"<<endl;
          i++;
          
          flag=1;
          if(i==n-1)
          break;
          
          }
          if(flag==0)
          i++;
         //cout<<i<<"**"<<count<<endl;
          if(count>max)
          max=count;
          if(count<min)
          min=count;
          count=1;
          
          while(diff[i]>2)
          {
              i++;
              count2++;
              //cout<<"i"<<i<<endl;
              if(i>=n-1)
              break;
          }
          if(count2>=2)
          min=1;
          count2=0;
          
         }
         if(diff[n-2]>2)
         min=1;
         cout<<min<<" "<<max<<endl;
         
     }
     return 0;
 } */