#include<bits/stdc++.h>
using namespace std;
int main()
{
	float accountBalance; 
	int moneyTowithdraw;
	cin >> moneyTowithdraw >> accountBalance;
    if( moneyTowithdraw % 5 == 0 && moneyTowithdraw != 0 && moneyTowithdraw < accountBalance && (float)(accountBalance-(moneyTowithdraw+0.50)) >= 0 )
    {
        cout << fixed << setprecision(2) << (float)(accountBalance-(moneyTowithdraw+0.50));
    }
    else
    {
        cout << fixed << setprecision(2) << accountBalance;
    }
    
    return 0;
}
