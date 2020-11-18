//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
    ll L ;
    int n ;
    cin >> L ;
    cin >> n ;
    while(n--)
    {
        ll W = 0, H = 0 ;
        cin >> W >> H ;
        if( W == H)
        {
            cout << "ACCEPTED" << endl ;
        }
        else if( L > W or L > H)
        {
            cout << "UPLOAD ANOTHER" << endl;
        }
        else
        {
            cout << "CROP IT" << endl ;
        }
    }
}
