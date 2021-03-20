//题目链接：
https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-iii-lcof/

//代码实现：
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>>res;
        if(!root) return res;
        queue<TreeNode*>q;
        
        q.push(root);
        q.push(nullptr);
        
        vector<int>level;//遍历树的层级
        bool zigzag=false; //true的话就是从右到左 false的话就是从左到右
        while(q.size())
        {
            auto t=q.front();
            q.pop();
            //如果说遍历完一整行了
            if(!t)
            {
                //如果说level空了 说明遍历完所有结果了 eg：下一层没有节点了
                if(level.empty()) break;
                if(zigzag) reverse(level.begin(),level.end());
                //否则就把level放到答案里面去并把level清空
                res.push_back(level);
                level.clear();
                q.push(nullptr);
                zigzag=!zigzag;
                continue;              
            }
            //否则就要扩展
            //先把当前的点加到level里面去
            level.push_back(t->val);
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        return res;
    }
};