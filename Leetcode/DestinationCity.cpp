#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
            for(int i = 0 ; i < paths.size() ; i++)
            {
                for(int j = 0 ; j < paths[i].size() ; j++)
                {
                    if(i == paths.size( ) - 1 and j == paths[i].size() - 1 )
                    {
                        // cout << paths[i][j] << endl ;
                        return paths[i][j] ;
                    }
                }
                // cout << endl ;
            }
            // return paths[paths.size() - 1 ][paths[paths.size() - 1 ]] ;
    }
};

int main()
{
    vector< vector <string> > paths = {{"London","New York"}, {"New York","Lima"} , {"Lima","Sao Paulo"} };
    Solution s ;
    s.destCity(paths) ;
}