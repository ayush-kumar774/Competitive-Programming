#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
    vector<int> freq1 (26, 0) ;
    vector<int> freq2 (26, 0) ;
    for(auto x : s1) {
        freq1[x - 97]++ ;
    }
    for(auto x : s2) {
        freq2[x - 97]++ ;
    }
    int count = 0 ;
    for(int i = 0 ; i < 26 ; i++) {
        count += abs(freq1[i] - freq2[i]) ;
    }
    //cout << count << endl ;
    return count ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/