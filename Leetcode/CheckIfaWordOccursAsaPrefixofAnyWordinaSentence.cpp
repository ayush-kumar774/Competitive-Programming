// In the name of Aadi Shakti
// You are everything and I am nothing
// Jai Mata Di 

//https://leetcode.com/contest/weekly-contest-190/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> v ;
        //char *t = strtok(sentence, " ");
        istringstream ss(sentence) ;
        do{
            string word ;
            ss >> word ;
            v.push_back(word);
        } while(ss) ;

        int a = searchWord.size() ;

        for(auto x : v) cout << x << endl ;
        // cout << v.size() ;
        for(int i = 0 ; i < v.size() ; i++)
        {
            for(int j = 0 ; j < v[i].size() ; j++)
            {
                if(a <= v[i].size())
                {
                    std::size_t found = v[i].find(searchWord);
                    if (found!=std::string::npos)
                        std::cout << "first 'needle' found at: " << found << '\n';

                }
                else{break ;}
            }
        }
    }
};


int main()
{
    string s ;
    getline(cin, s);
    string str ;
    cin >> str ;

    Solution sol ;
    sol.isPrefixOfWord(s, str) ; 
}
