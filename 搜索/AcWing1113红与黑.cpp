/*
题目链接：
https://www.acwing.com/problem/content/1115/
*/

//代码实现：
#include<iostream>
#include<queue>//bfs宽搜 需要引入队列
#include<algorithm>

#define x first 
#define y second
using namespace std;
typedef pair<int, int> PII;

const int N=25;

int n,m;
char g[N][N];

int bfs(int sx,int sy)
{
    queue<PII>q;
    q.push({sx,sy});//起点放在这里
    g[sx][sy]='#';//标记过的点记成 #
    int res=0;//用来存所有能够搜到的点的数量
    int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
    while(q.size())//队列不为空时
    {
        auto t=q.front();//把队头的删掉
        q.pop();
        res++;
        
        for(int i=0;i<4;i++)//扩展四个方向 用偏移量
        {
            int x=t.x+dx[i],y=t.y+dy[i];
            if(x<0||x>=n||y<0||y>=m||g[x][y]!='.') continue;
            g[x][y]='#';
            q.push({x,y});
        }
    }
    
    return res;
}

int main()
{
    while(cin>>m>>n,n||m)
    {
        for(int i=0;i<n;i++) cin>>g[i];//读入整个矩阵
        int x,y;//找到人所在的位置
        for(int i=0;i<n;i++)//枚举所有格子
           for(int j=0;j<m;j++)
              if(g[i][j]=='@')//人当前所在的位置
              {
                  x=i;
                  y=j;
              }
              
            cout<<bfs(x,y)<<endl;
    }
    return 0;
}
