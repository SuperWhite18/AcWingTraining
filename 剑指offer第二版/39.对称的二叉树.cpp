//题目链接：
https://leetcode-cn.com/problems/dui-cheng-de-er-cha-shu-lcof/

//代码实现：
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) 
    {
        if(!root) return true;
        return dfs(root->left,root->right);

    }
    bool dfs(TreeNode *p,TreeNode *q)
    {
        //递归终止条件
        if(p==NULL&&q==NULL) return true;
        if(p==NULL||q==NULL) return false;
        if(p->val!=q->val) return false;
        return dfs(p->left,q->right)&&dfs(p->right,q->left);

    }
};