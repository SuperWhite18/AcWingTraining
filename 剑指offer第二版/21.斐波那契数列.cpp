//题目链接：
https://www.acwing.com/problem/content/19/

//代码实现：
class Solution 
{
public:
    int Fibonacci(int n) 
    {
        int a=0,b=1;
        while(n--)
        {
            int c=a+b;
            a=b,b=c;
        }
        return a;
        
    }
};