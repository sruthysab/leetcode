/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pointerA = headA;
        ListNode* pointerB = headB;
        
        while(pointerA != pointerB){
            pointerA = (pointerA == nullptr)? headB : pointerA->next;// if reaches the end then switch
            pointerB = (pointerB == nullptr)? headA : pointerB->next;
        }
        return pointerA;
    }
};