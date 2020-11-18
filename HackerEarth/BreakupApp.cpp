//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/breakup-app/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n ;
  cin >> n ;
  std::vector<string> chat;
  string s ;
  for(int i = 0 ; i < n ; i++ ) {
     getline(cin, s);
     chat.push_back(s);
   }
  string a = "19" , b = "20" ;
  int weightageBF{0}, weightageGF{0} ;

  for(int i = 0 ; i < n; i++)
  {

    size_t found = chat[i].find(a) ;
    size_t found2 = chat[i].find(b) ;

    if(found != std::string::npos)
    {
      if(chat[i][0] == 'G') weightageGF += 2 ;
    }

    if(found2 != std::string::npos)
    {
      if(chat[i][0] == 'G') weightageGF += 2 ;
    }

    if(found != std::string::npos)
    {
      if(chat[i][0] == 'M') weightageBF++ ;
    }

    if(found2 != std::string::npos)
    {
      if(chat[i][0] == 'M') weightageBF++ ;
    }

  }

  cout << weightageBF << " " << weightageGF << endl;
}
