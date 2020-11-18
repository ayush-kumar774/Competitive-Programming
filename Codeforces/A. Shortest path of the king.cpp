// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl "\n"

void solve()
{
    string a , b ;
    cin >> a >> b ;
    int firstX , firstY, secondX, secondY ;
    firstX = a[0] - 96 ;
    firstY = a[1] - 48 ;
    secondX = b[0] - 96 ;
    secondY = b[1] - 48 ;
    //cout << 'a' - 96 << endl ;
    if(secondX > firstX and secondY == firstY) {
        cout << secondX - firstX << endl ;
        for(int i = 0 ; i < secondX - firstX ; i++) cout << "R" << endl ;
    } 

    else if(secondX < firstX and secondY == firstY) {
        cout << firstX - secondX << endl ;
        for(int i = 0 ; i < firstX - secondX ; i++) cout << "L" << endl ;
    } 

    else if (secondY > firstY and secondX == firstX) {
        cout << secondY - firstY << endl ;
        for(int i = 0 ; i < secondY - firstY ; i++) cout << "U" << endl ;
    } 

    else if(secondY < firstY and secondX == firstX) {
        cout << firstY - secondY << endl ;
        for(int i = 0 ; i < firstY - secondY ; i++) cout << "D" << endl ;
    } 
    else{
        if (firstX - secondX == firstY - secondY) {
            cout << firstX - secondX << endl;
            for(int i = 0 ; i < firstX - secondX; i++) cout << "LD" << endl ;
        }
        else if (secondX - firstX == secondY - firstY) {
            cout << secondX - firstX << endl ;
            for(int i = 0 ; i < secondX - firstX ; i++) cout << "RU" << endl ;
        }
        else if(secondX - firstX == firstY - secondY) {
            cout << secondX - firstX << endl ;
            for(int i = 0 ; i < secondX - firstX ; i++) cout << "RD" << endl ;
        }
        else if(firstX - secondX == secondY - firstY) {
            cout << firstX - secondX << endl ;
            for(int i = 0 ; i < firstX - secondX ; i++) cout << "LU" << endl ;
        }
    }
    
}

int32_t main()
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/