//题目链接：
https://www.acwing.com/problem/content/64/

//代码实现：
//二分思想

class Solution 
{
public:
    int getMissingNumber(vector<int>& nums) 
    {
        if(nums.empty()) return 0;
        
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int mid=l+r>>1;
            if(nums[mid]!=mid) r=mid;
            else l=mid+1;
        }
        if(nums[r]==r) r++;
        return r;
        
    }
};

