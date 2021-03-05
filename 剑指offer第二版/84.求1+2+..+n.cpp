//题目链接：
https://www.acwing.com/problem/content/80/


//代码实现

//方法一
class Solution {
public:
    int getSum(int n) 
    {
        bool arr[n][n+1];
        return sizeof(arr)>>1;
    }
};

//方法二
class Solution 
{
public:
    int getSum(int n) 
    {
        int res=n;
        n>0&&(res+=getSum(n-1));
        return res;
    }
};