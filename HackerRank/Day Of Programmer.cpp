//https://www.hackerrank.com/challenges/day-of-the-programmer/problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year ;
    cin >> year ;
    if (year >= 1700 and year <= 1917) {
        
        if(year % 4 == 0) {
            cout << "12.09." << year << endl ;   
        }
        else
        {
            cout << "13.09." << year << endl ; 
        }
    }
    else if (year == 1918) {
        cout << "26.09.1918" << endl ; // Because 32nd day of year was 14th of february.
    }
    else 
    {
        if (year % 400 == 0 ) {
            cout << "12.09." << year << endl ; 
        }
        else if(year % 4 == 0 and year % 100 !=  0) {
            cout << "12.09." << year << endl ;   
        }
        else
        {
            cout << "13.09." << year << endl ; 
        }
    }
    return 0 ;
}