/*
题目链接：
https://www.acwing.com/problem/content/758/
*/
//代码实现:
#include <iostream>
using namespace std;

const int N = 110;

int n, m;
int q[N][N];//数组模拟

int main()
{
    cin >> n >> m;
    int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
    //定义方向的偏移量  （偏移量数组常用）
    int x = 0, y = 0, d = 1;
    //定义当前坐标，从左上角开始走 d是方向 ：1是向右，2是向下，3是向左，4是向上
    for (int i = 1; i <= n * m; i ++ )//把所有数填进去
    {
        q[x][y] = i;//把i填在格子上
        int a = x + dx[d], b = y + dy[d];//沿着当前方向走，下一个格子的坐标
        if (a < 0 || a >= n || b < 0 || b >= m || q[a][b])//判断是否撞墙：撞墙分两种：1.出界2.走到重复格子
        {
            d = (d + 1) % 4;//如果撞墙，则顺时针旋转方向
            a = x + dx[d], b = y + dy[d];//更新坐标
        }
        x = a, y = b;
    }

    for (int i = 0; i < n; i ++ )//重新输出矩阵
    {
        for (int j = 0; j < m; j ++ )
            cout << q[i][j] << ' ';
        cout << endl;
    }

    return 0;
}

