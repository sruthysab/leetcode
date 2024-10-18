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
    vector<int> leaf1;
    vector<int> leaf2;
    void dfs(TreeNode* root, vector<int>& result){ //mistake didn't pass by reference
        if(root == nullptr){
            return;
        }
        dfs(root->left, result);
        if(root->left == nullptr && root->right == nullptr){
            result.push_back(root->val);
        }
        dfs(root->right, result);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        dfs(root1, leaf1);
        dfs(root2, leaf2);
        if(leaf1.size() != leaf2.size()){
            return false;
        }
        return leaf1 == leaf2;
    }
};