//题目链接：
https://leetcode-cn.com/problems/ping-heng-er-cha-shu-lcof/

//代码实现：
class Solution {
public:
    bool ans=true;
    bool isBalanced(TreeNode* root) 
    {
        dfs(root);
        return ans;
    }
    int dfs(TreeNode* root)
    {
        if(!root) return 0;
        int left=dfs(root->left),right=dfs(root->right);
        if(abs(left-right)>1) ans=false;
        return max(left,right)+1;
    }
};
