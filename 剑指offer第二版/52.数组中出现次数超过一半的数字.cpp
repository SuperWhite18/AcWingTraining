//题目链接：
https://leetcode-cn.com/problems/shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-ban-de-shu-zi-lcof/


//代码实现：
class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int cnt=0,val=-1;
        for(auto x : nums)
        {
            if(!cnt) val=x,cnt=1;
            else
            {
                if(x==val) cnt++;
                else cnt--;
            }
        }
        return val;
    }
};
