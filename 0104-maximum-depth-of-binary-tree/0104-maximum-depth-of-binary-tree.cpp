/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        stack<pair<TreeNode*, int>> tree;
        tree.push({root, 1});
        int maxDepth = 0;
        
        while(!tree.empty()){
            TreeNode* node = tree.top().first;
            int depth = tree.top().second;
            tree.pop();
            
            if(node != nullptr){
                maxDepth = max(maxDepth, depth);
                tree.push({node->right, depth+1});
                tree.push({node->left, depth+1});
            }
        }
        return maxDepth;
    }
};