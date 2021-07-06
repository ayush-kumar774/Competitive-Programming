#include<bits/stdc++.h>
using namespace std;
int main()
{
        int queries ;
        cin >> queries ;
        while(queries--)
        {
                int number , count{0} ;
                cin >> number ;
                vector<int>v(number);
                for(auto &x: v) 
                {
                        cin >> x ;
                        if(x == 2048)
                        {
                           count++;
                        }
                }
                if(count > 0) cout << "YES\n" ;
                else
                {
                        sort(v.begin(), v.end());
                }


        }
}