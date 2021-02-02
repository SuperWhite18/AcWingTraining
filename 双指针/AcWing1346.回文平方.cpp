//题目链接：
https://www.acwing.com/problem/content/1348/
//代码实现：
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

char get(int x)//将x转换为字符形式
{
    if (x <= 9) return x + '0';
    return x - 10 + 'A';
}

string base(int n, int b)//将n转换为b进制，返回对应字符串
{
    string num;
    while (n) num += get(n % b), n /= b;
    reverse(num.begin(), num.end());//翻转  转换的时候是从下往上读
    return num;
}

bool check(string num)//检查s是不是回文
{
    for (int i = 0, j = num.size() - 1; i < j; i ++, j -- )
        if (num[i] != num[j])
            return false;
    return true;
}

int main()
{
    int b;
    cin>>b;
    for(int i=1;i<=300;i++)//暴力枚举
    {
        auto num=base(i*i,b);
        if(check(num))
        cout << base(i, b) << ' ' << num << endl;
    }
}

