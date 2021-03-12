//代码实现：
https://www.acwing.com/problem/content/25/

//代码实现：
class Solution {
public:
    int NumberOf1(int n) 
    {
        int count=0;
        while(n)
        {
            n=n&(n-1);
            count++;
        }
        return count;
        
    }
};