//题目链接：
https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-lcof/

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
    vector<int> levelOrder(TreeNode* root) 
    {
        //标准的bfs层序遍历
        //把每个还未搜索的点依次放入队列，然后再弹出队列的头部元素作为当前遍历点
        vector<int>res;
        if(!root) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size())
        {
            auto t=q.front();//此时等于获取了root
            q.pop();
            res.push_back(t->val);
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        return res;
    }
};