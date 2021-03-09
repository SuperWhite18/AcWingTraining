//题目链接：
https://www.acwing.com/problem/content/79/

//代码实现：

class Solution {
public:
    int maxDiff(vector<int>& nums) 
    {
        if(nums.empty()) return 0;
        int res=0;
        
        for(int i=1,minv=nums[0];i<nums.size();i++)
        {
            res=max(res,nums[i]-minv);
            //更新minv
            minv=min(minv,nums[i]);
        }
        return res;
        
    }
};