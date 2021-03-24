//题目链接：
https://www.acwing.com/problem/content/description/47/

//代码实现：
class Solution {
public:

    vector<vector<int>> ans;
    vector<int> path;

    vector<vector<int>> permutation(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        path.resize(nums.size());
        dfs(nums, 0, 0, 0);
        return ans;
    }

    void dfs(vector<int> &nums, int u, int start, int state)
    {
        if (u == nums.size())
        {
            ans.push_back(path);
            return;
        }

        if (!u || nums[u] != nums[u - 1]) start = 0;

        for (int i = start; i < nums.size(); i ++ )
            if (!(state >> i & 1))
            {
                path[i] = nums[u];
                dfs(nums, u + 1, i + 1, state + (1 << i));
            }
    }
};


