    // In the name of Aadi Shakti
    // We are nothing and you are everything
    // Jai Mata Di
     
    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int k , length ;
        string str ;
        cin >> k >> str ; 
        length = str.size();
        // cout << length << endl ; 
        if(k < length )
        {
            for (int i = 0; i < k; i++)
            {
                cout << str[i] ;
            }
            cout << "..." << endl ;
        } 
        else cout << str << endl;
        return 0 ;
    }