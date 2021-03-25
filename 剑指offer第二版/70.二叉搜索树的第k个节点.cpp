//题目链接：
https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-di-kda-jie-dian-lcof/

//代码实现：
class Solution 
{
public:
    vector<int>res;  
    int kthLargest(TreeNode* root, int k) 
    {
        dfs(root);
        reverse(res.begin(),res.end());
        return res[k-1];

    }
    void dfs(TreeNode* root)
    {
        if(!root) return;       
        dfs(root->left);
        res.push_back(root->val);
        dfs(root->right);
    }
};