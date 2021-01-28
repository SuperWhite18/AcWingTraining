//题目链接:https://www.acwing.com/problem/content/description/15/

//代码实现
class Solution {
public:
    int duplicateInArray(vector<int>& nums) 
    {
        int l=1,r=nums.size()-1;
        while(l<r)
        {
            int mid=l+r >>1;
            int s=0;
            for(auto x : nums)
            if(x>=l && x<=mid)
            s++;
            
            if(s>mid-l+1) r=mid;
            else l=mid+1;
        }
        return r;
        
    }
};