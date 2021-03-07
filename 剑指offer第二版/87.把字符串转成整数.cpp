//题目链接：

https://www.acwing.com/problem/content/83/

//代码实现：
//将情况考虑全面

class Solution {
public:
    int strToInt(string str) 
    {
        long long number = 0;
        bool is_minus = false;
        int k = 0;
        while (k < str.size() && str[k] == ' ') k ++ ;
        if (str[k] == '+') k ++ ;
        else if (str[k] == '-') is_minus = true, k ++ ;
        while (k < str.size() && str[k] >= '0' && str[k] <= '9') 
        {
            number = number * 10 + str[k] - '0';
            k ++ ;
        }
        if (is_minus) number *= -1;
        if (number > INT_MAX) number = INT_MAX;
        if (number < INT_MIN) number = INT_MIN;
        return (int)number;
    }
};

