//题目链接：
https://www.acwing.com/problem/content/49/

//代码实现：
//思路一：先将数组排序，然后输出前k个数
class Solution {
public:
    vector<int> getLeastNumbers_Solution(vector<int> input, int k) 
    {
        vector<int> vec(k,0);
        sort(input.begin(),input.end());
        for(int i=0;i<k;i++)
        {
            vec[i]=input[i];
        }
        return vec;
        
        
    }
};
