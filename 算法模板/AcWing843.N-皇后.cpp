//按行搜索
#include<iostream>
using namespace std;

const int N = 20;
int n;
bool col[N],dg[N],udg[N];//col：列 dg：对角线 udg：反对角线
char g[N][N]; //用来存路径

void dfs(int u)
{
    if(u == n) //表示已经搜了n行，则输出这条路径
    {
        for(int i = 0; i < n; i++) puts(g[i]);
        puts("");
        return;
    }
    
    //对n个位置按行搜索
    for(int i = 0; i < n; i++)
    {
        //剪枝：对于不满足要求的点，不再往下搜索
        if(!col[i] && !dg[u + i] && !udg[n - u + i])
        {
            g[u][i] = 'Q';
            col[i] = dg[u + i] = udg[n - u + i] = true;
            dfs(u + 1);
            col[i] = dg[u + i] = udg[n - u + i] = false;//恢复现场
            g[u][i] = '.';
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            g[i][j] = '.';
    
    dfs(0);
    return 0;
}

//按元素搜索
#include <iostream>
using namespace std;
const int N = 20;

int n;
char g[N][N];
bool row[N], col[N], dg[N], udg[N]; // 因为是一个个搜索，所以加了row

// s表示已经放上去的皇后个数
void dfs(int x, int y, int s)
{
    // 处理超出边界的情况
    if (y == n) y = 0, x ++ ;

    if (x == n) // x==n说明已经枚举完n^2个位置了
    { 
        if (s == n) // s==n说明成功放上去了n个皇后
        { 
        	//输出这组解
            for (int i = 0; i < n; i ++ ) puts(g[i]);
            puts("");
        }
        return;
    }

    // 分支1：放皇后
    if (!row[x] && !col[y] && !dg[x + y] && !udg[x - y + n]) 
    {
        g[x][y] = 'Q';
        row[x] = col[y] = dg[x + y] = udg[x - y + n] = true;
        dfs(x, y + 1, s + 1);
        row[x] = col[y] = dg[x + y] = udg[x - y + n] = false;
        g[x][y] = '.';
    }

    // 分支2：不放皇后
    dfs(x, y + 1, s);
}


int main() 
{
    cin >> n;
    for (int i = 0; i < n; i ++ )
        for (int j = 0; j < n; j ++ )
            g[i][j] = '.';

    dfs(0, 0, 0);

    return 0;
}



