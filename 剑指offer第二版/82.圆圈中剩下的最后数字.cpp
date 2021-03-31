//题目链接：
https://leetcode-cn.com/problems/yuan-quan-zhong-zui-hou-sheng-xia-de-shu-zi-lcof/submissions/

//代码实现：
class Solution {
public:
    int lastRemaining(int n, int m) 
    {
        if(n==1) return 0;
        return(lastRemaining(n-1,m)+m)%n;

    }
};
