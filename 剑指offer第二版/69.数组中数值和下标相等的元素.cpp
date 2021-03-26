//题目链接：
https://www.acwing.com/problem/content/65/

//代码实现：
class Solution {
public:
    int getNumberSameAsIndex(vector<int>& nums) 
    {
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int mid=(l+r)>>1;
            if(nums[mid]-mid>=0) r=mid;
            else l=mid+1;
            
        }
        if(nums[r]!=r) r=-1;
        return r;
    }
};
