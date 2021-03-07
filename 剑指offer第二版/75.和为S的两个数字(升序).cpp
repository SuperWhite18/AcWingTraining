//题目链接：
https://leetcode-cn.com/problems/he-wei-sde-liang-ge-shu-zi-lcof/

//代码实现：
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        /* 哈希 O(N)
       unordered_map<int,int>hash;
       for(int i=0;i<nums.size();i++)
       {
           if(hash[target-nums[i]]==0) hash[nums[i]]++;
           else return {nums[i],target-nums[i]};
       } 
       return{};
       */
       /*双指针
       int l=0,r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]+nums[r]==target)
            {
                return vector<int>{nums[l],nums[r]};
            }
            if(nums[l]+nums[r]>target)
            {
                r--;
            }
            if(nums[l]+nums[r]<target)
            {
                l++;
            }
        }
        return vector<int>();
        */



    }
};