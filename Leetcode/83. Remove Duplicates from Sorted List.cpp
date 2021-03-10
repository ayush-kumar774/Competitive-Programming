#include <bits/stdc++.h>
using namespace std ;
#define int long long

struct ListNode
{
        int val ;
        ListNode *next ;
        ListNode (int x) {
                this->val = x ;
                next = NULL ;
        }
};
ListNode* takeInput() ;
ListNode* deleteDuplicates(ListNode* head);
void printListNode(ListNode* head);

int32_t main()
{
        ListNode* head = takeInput() ;
        printListNode(head) ;
        ListNode* head2 = deleteDuplicates(head) ;
        printListNode(head2);
}

ListNode* takeInput() {
        ListNode *head = NULL ;
        ListNode *tail = NULL ;
        int n ;
        cin >> n ;
        while (n != -1)
        {
               ListNode* newNode = new ListNode(n) ;
               if (head == NULL) {
                       head = newNode ;
               } 
               else {
                       tail->next = newNode ;
               }
               tail = newNode ;
               cin >> n ; 
        }
        return head ; 
}

ListNode* deleteDuplicates2(ListNode* head) {
  
        ListNode* t = head;
        while(t and t->next){
                if ( t->val == t->next->val ) {
                        t->next = t->next->next ;
                }
                else { 
                        t = t->next ;
                } 
        }
        return head;
}

ListNode* deleteDuplicates(ListNode* head) {
        set<int> s ;
        while (head != NULL)
        {
                s.insert(head->val) ;
                head = head->next;
        }
        vector<int> v(s.begin() , s.end()) ;
        ListNode* finalHead = NULL ;
        ListNode* tail = NULL ;
        for (int i = 0 ; i < v.size() ; i++) {
                ListNode* newNode = new ListNode(v[i]) ;
                if(finalHead == NULL) {
                        finalHead = newNode ;
                }
                else {
                        tail->next = newNode ;
                }
                tail = newNode ;
        }
        return finalHead;
}

void printListNode(ListNode* head) {
        if (head == NULL) {
                cout << "Linked List is empty" << endl ;
        }
        else {
                while (head != NULL)
                {
                        cout << head->val << " -> " ;
                        head = head->next;
                }               
                cout << "null." << endl ;
        }
}