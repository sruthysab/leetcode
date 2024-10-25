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
        
        // Calculate the length of the linked list
        while (curr) {
            n++;
            curr = curr->next;
        }
        
        // Reset curr to head
        curr = head;
        vector<int> firstHalf; // No need to predefine size
        int maxSum = INT_MIN;
        
        int i = 0;
        // Traverse the list to handle pair sums
        while (curr) {
            if (i < n / 2) {
                // Store values from the first half
                firstHalf.push_back(curr->val);
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
