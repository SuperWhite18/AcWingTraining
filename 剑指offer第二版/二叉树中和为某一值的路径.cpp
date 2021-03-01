//题目链接：
https://www.acwing.com/problem/content/45/



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
    vector<vector<int>>ans;
    vector<int>path;
    vector<vector<int>> findPath(TreeNode* root, int sum) 
    {
        //不用加 用减法 这样只需要遍历树的结点然后 减到0为止 就等于找到路径和 中间过程中需要维护结点
        dfs(root,sum);
        return ans;
    }
    void dfs(TreeNode* root,int sum)
    {
        if(!root) return ;
        path.push_back(root->val);//节点加入路径
        sum-=root->val;
        if(!root->left&&!root->right&&!sum) ans.push_back(path);//路径加入答案
        dfs(root->left,sum);
        dfs(root->right,sum);
        
        path.pop_back();//清空当前 因为有可能还要遍历其他的分支
    }
};