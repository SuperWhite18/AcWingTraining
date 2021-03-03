//题目链接：
https://www.acwing.com/problem/content/63/

//代码实现：
class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) 
    {
        if(nums.empty()) return 0;
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int mid=l+r>>1;
            if(nums[mid]<k) l=mid+1;
            else r=mid;
        }
        if(nums[l]!=k) return 0;
        int left=l;
        l=0,r=nums.size()-1;
        while(l<r)
        {
            int mid=l+r+1>>1;
            if(nums[mid]<=k) l=mid;
            else r=mid-1;
        }
        return r-left+1;
        
    }
};