// https://www.hackerrank.com/challenges/balanced-brackets/problem

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
fstream f ;

int ind ; 
int Stack[2000] ;

bool isEmpty() {
    if (ind >= 1) return false ;
    else return true ;
}

int top () {
    return Stack[ind] ;
}

void push (int ch) {
    ind++ ;
    Stack[ind] = ch ;
}

void pop () {
    Stack[ind] = 0 ;
    ind-- ;
}

void solve()
{
    int flag = 0 ;
    string s ;
    cin >> s ;
    for(int i = 0 ; i < s.size() ; i++) {
        if (s[i] == '[') {
            push(1) ;
        }
        else if (s[i] == '{') {
            push(2) ;
        }
        else if (s[i] == '(') {
            push(3) ;
        }

        if (s[i] == ']') {
            int a = top() ;
            bool em = !(isEmpty()) ;
            if (a == 1 and em == true) {
                // cout << "Top is equal to [" << endl ;
                // cout << !(isEmpty()) << endl ;
                pop() ;
            }
            else flag = 1 ;
        }
        else if(s[i] == '}') {
            int a = top() ;
            bool em = !(isEmpty()) ;
            if (a == 2 and em == true) {
                // cout << "Top is equal to {" << endl ;
                // cout << !(isEmpty()) << endl ;
                pop() ;
            }
            else flag = 1 ;
        }
        else if (s[i] == ')') {
            int a = top() ;
            bool em = !(isEmpty()) ;
            if (a == 3 and em == true) {
                pop() ;
            }
            else flag = 1 ;
        }
    }
    if (flag) cout << "NO" << endl ;
    else cout << "YES" << endl ;
    ind = 0 ;
}

int32_t main()
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
    // freopen("inputBracket.txt","r",stdin);
    // freopen("outputBracket.txt","w",stdout);
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
