    // In the name of Aadi Shakti
    // We are nothing and you are everything
    // Jai Mata Di
     
    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        long long n ;
        cin >> n ;
        long long last = n % 10 ;
        if ( last == 2 or last == 4 or last == 5 or last == 7 or last == 9) 
            cout << "hon" << endl ;
        else if (last == 0 or last == 1 or last == 6 or last == 8)
            cout << "pon" << endl; 
        else if(last == 3)
            cout << "bon" << endl ;
        return 0 ;
    }