/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* curr = head;
        int n = 0;
        
        // Count total nodes in the list
        while (curr) {
            n++;
            curr = curr->next;
        }
        
        // Reset curr to head
        curr = head;
        vector<int> firstHalf(n / 2);
        int maxSum = INT_MIN;
        
        int i = 0;
        // Traverse the list to fill first half
        while (curr) {
            if (i < n / 2) {
                firstHalf[i] = curr->val; // Store first half values
            } else {
                // Add the mirrored values from the second half
                int pairSum = firstHalf[n - i - 1] + curr->val;
                maxSum = max(maxSum, pairSum); // Find max of pair sums
            }
            i++;
            curr = curr->next;
        }
        
        return maxSum;
    }
};
