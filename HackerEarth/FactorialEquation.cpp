    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        string s;
        cin >> s ;
        long long b ;
        cin >> b ;
        if(b == 0) cout << 1 << endl ;
        else {
            b = b % 10 ;
        int a = s.size();
        if(s [a - 1 ] == '1' ) cout << 1;
        if(s [a - 1 ] == '5' ) cout << 5;
        if(s [a - 1 ] == '6' ) cout << 6;
        if(s [a - 1 ] == '0' ) cout << 0;
        if(s [a - 1 ] == '2')
        {
            b %= 4;
            string ans ;
            long long res = (pow(2, b) ) ;
            ans = to_string(res) ;
            cout << ans[ans.size() - 1] ;
        }
        if(s [a - 1 ] == '3')
        {
            b %= 4 ;
            string ans ;
            long long res = (pow(3, b) ) ;
            ans = to_string(res) ;
            cout << ans[ans.size() - 1] ;
        }
        if(s [a - 1 ] == '4')
        {
            b %= 2 ;
            string ans ;
            long long res = (pow(4, b) ) ;
            ans = to_string(res) ;
            cout << ans[ans.size() - 1] ;
        }
        if(s [a - 1 ] == '7')
        {
            b %= 4 ;
            string ans ;
            long long res = (pow(7, b) ) ;
            ans = to_string(res) ;
            cout << ans[ans.size() - 1] ;
        }
        if(s [a - 1 ] == '8')
        {
            b %= 4 ;
            string ans ;
            long long res = (pow(8, b) ) ;
            ans = to_string(res) ;
            cout << ans[ans.size() - 1] ;
        }
        if(s [a - 1 ] == '9')
        {
            b %= 2 ;
            string ans ;
            long long res = (pow(9, b) ) ;
            ans = to_string(res) ;
            cout << ans[ans.size() - 1] ;
        }
        }
        
    }