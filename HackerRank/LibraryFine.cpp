// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d1, d2, m1, m2, y1, y2 ;
    cin >> d1 >> m1 >> y1 ; // Return date
    cin >> d2 >> m2 >> y2 ; // Due date

    if (d1 <= d2 and m1 <= m2 and y1 <= y2) cout << 0 << endl ;
    else if (m1 < m2 and y1 <= y2) cout << 0 << endl ;
    else if ( y1 > y2 ) cout << 10000 << endl ;
    else if ( m1 > m2 and y1 >= y2 ) cout << 500 * ( m1 - m2 ) << endl ;
    else if ( d1 > d2 and y1 >= y2 ) cout << 15 * ( d1 - d2 ) << endl ;
    else cout << 0 << endl ;
    return 0 ;
}