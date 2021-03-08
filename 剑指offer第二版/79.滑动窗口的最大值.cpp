//题目链接：
https://www.acwing.com/problem/content/description/75/

//代码实现：

class Solution {
public:
    vector<int> maxInWindows(vector<int>& nums, int k) 
    {
        vector<int> res;
        deque<int> q;

        for (int i = 0; i < nums.size(); i ++ ) 
        {
            while (q.size() && q.front() <= i - k) q.pop_front();
            while (q.size() && nums[q.back()] <= nums[i]) q.pop_back();
            q.push_back(i);
            if (i >= k - 1) res.push_back(nums[q.front()]);
        }

        return res;
    }
};


