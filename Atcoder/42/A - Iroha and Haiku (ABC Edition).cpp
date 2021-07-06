#include<bits/stdc++.h>
using namespace std;
int main()
{
        int arr[3], one = 0 , two = 0;
        for(auto &x : arr) { 
                cin >> x ; 
                if (x == 5 ) one++; 
                if( x == 7) two++;
        }
        if(one == 2 and two == 1)
                cout << "YES" << endl ;
        else
                cout << "NO" << endl;
        return 0 ; 
}