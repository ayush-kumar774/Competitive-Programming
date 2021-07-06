#include <bits/stdc++.h>
using namespace std ;

struct ListNode {      
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
        public:
        bool hasCycle(ListNode *head) {
                map<ListNode*, int> mp ;
                while(head != NULL) {
                       mp[head]++; 
                       head = head->next ;
                }
                for (auto x : mp) {
                        if (x.second > 1) {
                                return true ;
                        }
                }
                return false ;
        }
        bool hasCycleBetter(ListNode* head) {
                if (head == NULL) {
                        return false ;
                }

                ListNode* slow = head ;
                ListNode* fast = head->next ;

                while (slow != fast) 
                {
                        if ((fast == NULL || fast->next == NULL)) {
                                return false ;
                        }
                        slow = slow->next ;
                        fast = fast->next->next ;
                }
                return true ;
                
        }
}