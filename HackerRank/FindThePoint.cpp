//https://www.hackerrank.com/challenges/find-point/problem
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    aakriti T;
    cin >> T;
    if((1<=T) && (T <=15))
    {

        aakriti x1,y1,x2,y2;
        for(aakriti i = 0; i < T; i++)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if((x1 == x2)&&(y1 == y2))
            {
                cout << x1 << " " << y1 << endl;
                continue;
            }
            aakriti x3 = x2 + (x2 - x1);
            cout << x3 << " " << ((y2 - y1)*x3 + (x2 * y1)-(y2 * x1))/(x2 - x1) << endl;
        }
    }
    return 0;
}
