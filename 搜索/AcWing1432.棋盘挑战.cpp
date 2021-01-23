/*
题目链接：
https://blog.csdn.net/qq_45657288/article/details/113063655
*/

//代码实现：
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 15;

int n;
bool col[N], dg[N * 2], udg[N * 2];
//col[N]--->判断某些位置到底能不能填  dg[N*2]--->判断对角线  dg[N*2]--->判断反对角线

int path[N], ans;//记录方案和答案的数量

void dfs(int x)//x表示行数
{
    if (x > n)
    {
        ans ++ ;
        if (ans <= 3)
        {
            for (int i = 1; i <= n; i ++ )//输出前三个方案
                cout << path[i] << ' ';
            cout << endl;
        }
        return;
    }

    for (int y = 1; y <= n; y ++ )//列是1到n枚举
        if (!col[y] && !dg[x + y] && !udg[x - y + n])
        {
            path[x] = y;
            col[y] = dg[x + y] = udg[x - y + n] = true;//标记一下 已经填了数了
            dfs(x + 1);//搜索下一层
            col[y] = dg[x + y] = udg[x - y + n] = false;//恢复现场
            path[x] = 0;
        }
}

int main()
{
    cin >> n;//读入行数
    dfs(1);//从第一行DFS
    cout << ans << endl;
    return 0;
}
