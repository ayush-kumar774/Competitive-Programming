    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        int v = 0;     
        int lvl = 0;   
        for(char c : s) {
            if(c == 'U') ++lvl;
            if(c == 'D') --lvl;
            
        
            if(lvl == 0 && c == 'U')
                ++v;
        }
        cout << v << endl ;
        return 0 ;
    }