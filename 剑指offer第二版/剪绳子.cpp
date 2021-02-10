//题目链接：
https://www.acwing.com/problem/content/24/



//代码实现
class Solution 
{
public:
    int maxProductAfterCutting(int length) 
    {
        if(length>=2 && length<=3) return length-1;
        int res=1;

        if(length%3==2)res*=2,length-=2;
        if(length%3==1)res*=4,length-=4;

        while(length)
        {
            res*=3;
            length-=3;
        }
        return res;
    }
};


