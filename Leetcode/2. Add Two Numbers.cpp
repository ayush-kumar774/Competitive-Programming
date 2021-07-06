#include <bits/stdc++.h>
using namespace std ;
struct ListNode
{
        ListNode* next ;
        int val ;
        ListNode(int x) {
                val = x ;
                next = NULL ; 
        }
};


ListNode* takeInput() {
        ListNode* head = NULL ;
        ListNode* tail = NULL ;

        int data ;
        cin >> data ;
        while (data != -1)
        {
                ListNode* newNode = new ListNode(data) ;
                if (head == NULL) {
                        head = newNode ;
                }
                else {
                        tail->next = newNode ;
                }
                tail = newNode ;

                cin >> data ;
        }
        return head ;
}

void printLinkedList(ListNode* head) {
        if (head == NULL) {
                cout << "Linked List is empty." << endl ;
                return ;
        }
        else {
                while (head != NULL)
                {
                        cout << head->val << " -> " ;
                        head = head->next ;
                }
                cout << "null." << endl ;
        }

}
string addString(string str1, string str2)
{
        if (str1.length() > str2.length()) 
        {
                swap(str1, str2);
        } 
        string str = ""; 
        int n1 = str1.length(), n2 = str2.length(); 
        int diff = n2 - n1; 

        int carry = 0; 

        for (int i=n1-1; i>=0; i--) 
        { 

                int sum = ((str1[i]-'0') + (str2[i+diff]-'0') + carry); 
                str.push_back(sum%10 + '0'); 
                carry = sum / 10; 
        } 
  

        for (int i=n2-n1-1; i>=0; i--) 
        { 
                int sum = ((str2[i]-'0')+carry); 
                str.push_back(sum%10 + '0'); 
                carry = sum/10; 
        } 
  

        if (carry) 
        {        
                str.push_back(carry+'0');
        } 
        reverse(str.begin(), str.end()); 
  
        return str; 
}
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string num1 = "" , num2 = "" ;
        while (l1 != NULL)
        {
                num1 += to_string(l1->val) ;
                l1 = l1->next;
        }
        while (l2 != NULL)
        {
                num2 += to_string(l2->val) ;
                l2 = l2->next;
        }
        reverse(num1.begin(), num1.end()) ;
        reverse(num2.begin(), num2.end()) ;
        string sum = addString(num1, num2) ;
        num1 = to_string(sum) ;
        ListNode* head = NULL ;
        ListNode* tail = NULL ;
        int n = num1.size() ;
        for (int i = n - 1 ; i >= 0 ; i--) {
                ListNode* newNode = new ListNode((num1[i] - 48)) ;
                if(head == NULL) {
                        head = newNode ;
                }
                else {
                        tail->next = newNode ;
                }
                tail = newNode ;
        }
        return head ;
}

int main() 
{
        ListNode* head1 = takeInput();
        ListNode* head2 = takeInput();
        ListNode* sum = addTwoNumbers(head1, head2) ;
        printLinkedList(sum) ;
        return 0 ;
}

