/*
题目链接：
https://www.acwing.com/problem/content/1355/
*/

//代码实现：
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1010;

int n;
int h[N];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> h[i];

    int res = 1e8;//最大值是1e7 多取一位
    for (int i = 0; i + 17 <= 100; i ++ )//枚举所有区间
    {
        int cost = 0, l = i, r = i + 17;//l是左区间 r是右区间
        for (int j = 0; j < n; j ++ )//修改所有山峰的代价之和
            if (h[j] < l) 
            cost += (l - h[j]) * (l - h[j]);//在l 左区间
            else if (h[j] > r) 
            cost += (h[j] - r) * (h[j] - r);//在r 右区间
        res = min(res, cost);
    }

    cout << res << endl;

    return 0;
}



