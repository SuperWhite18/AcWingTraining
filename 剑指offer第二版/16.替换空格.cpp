//题目链接：
https://www.acwing.com/problem/content/17/

//代码实现：
class Solution 
{
public:
    string replaceSpaces(string &str) 
    {
        string res;
        for (auto x : str)
            if (x == ' ')
                res += "%20";
            else
                res += x;
        return res;
    }
};