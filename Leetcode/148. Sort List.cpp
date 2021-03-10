#include <bits/stdc++.h>
using namespace std ;

struct ListNode {      
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};


ListNode* mergeSorted(ListNode* headA, ListNode* headB) {
        if (headA == NULL) {
                return headB ;
        }
        else if (headB == NULL) {
                return headA ;
        } 

        ListNode* result ;
        if (headA->val <= headB->val) {
                result = headA ;
                result->next = mergeSorted(headA->next , headB) ;
        }
        else {
                result = headB ;
                result->next = mergeSorted(headA , headB->next) ;
        }
        return result ;
}

ListNode* middleElement(ListNode* head) {
        cout << "Mid" << endl ;
        if(head == NULL or head->next == NULL) {
                return head ;
        }
        ListNode* fast = head ;
        ListNode* slow = head ;

        while (fast->next != NULL and fast->next->next != NULL)
        {
                slow = slow->next ;
                fast = fast->next->next;
        }
        return slow ;
}

ListNode* mergeSort(ListNode* head) {
        if (head == NULL || head->next == NULL) {
                return head ;
        }

        ListNode* mid = middleElement(head) ;
        ListNode* otherHalf = mid->next ;
        mid->next = NULL ;

        ListNode* left = mergeSort(head) ;
        ListNode* right = mergeSort(otherHalf) ;

        ListNode* sortedLinkedList = mergeSorted(left, right) ;
        return sortedLinkedList ;
}


int main()
{
        ListNode* head = takeInput() ;
        printLinkedList(head) ;
        ListNode* head2 = mergeSort(head) ;
        printLinkedList(head2) ;
        return 0 ;
}