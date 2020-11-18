// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

int hour , minute ;
bool isPalindrome() {
        if (hour % 10 != minute / 10 ) return false ;
        else if (hour / 10 != minute % 10 ) return false ;
        else return true ;
}

void makePalindrome() {
        minute++ ;
        if(minute == 60) {
                minute = 0 ;
                hour++ ;
        }
        if (hour == 24) hour = 0 ;
}

void solve()
{
        string s ;
        cin >> s ;
        hour = 10 * int(s[0] - '0') + int(s[1] - '0') ;
        minute = 10 * int(s[3] - '0') + int(s[4] - '0') ;
        while(1) {
                makePalindrome() ;
                if (isPalindrome()) {
                        if(hour == 0) {
                                cout << "00:00" << endl ;
                                return;
                        }
                        if (hour > 0 and hour < 10 ) {
                                cout << "0" << hour ;
                        }
                        else {
                                cout << hour ;
                        }
                        if (minute < 10) {
                                cout <<":0" << minute << endl ;
                        }
                        else {
                                cout << ":" << minute << endl ;
                        }
                        break ;
                }

        }
}

int32_t main()
{
        fast ;
        int testcases = 1 ;
        // cin >> testcases ;
        while(testcases--)
        {
                solve() ;
        }
        return 0;
}
/*  CODED BY:-
         ___________________________________
        |                       ___         |
        |  /\   /\  \ /  |  |  |___   |__|  |
        | /~~\ /~~\  |   |__|   ___|  |  |  |
        |___________________________________|
*/
