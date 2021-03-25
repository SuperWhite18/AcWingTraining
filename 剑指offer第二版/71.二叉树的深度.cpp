//题目链接：
https://leetcode-cn.com/problems/er-cha-shu-de-shen-du-lcof/

//代码实现：

class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        if(!root) return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};