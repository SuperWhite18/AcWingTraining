/*
题目链接：
https://www.acwing.com/problem/content/description/1373/
*/

//代码实现
//二维空间
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

typedef long long LL;
const int N=30,M=10010;
int n,m;

LL f[N][M];

int main()
{
    cin>>n>>m;
    f[0][0]=1;
    
    for(int i=1;i<=n;i++)
    {
        int v;
        cin>>v;
        for(int j=0;j<=m;j++)
        {
            f[i][j]=f[i-1][j];
            if(j>=v)
            {
                f[i][j]+=f[i][j-v];
            }
        }
    }
    cout<<f[n][m]<<endl;
    return 0;
}
//一维空间：
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long LL;
const int N = 30, M = 10010;
int n, m;
LL f[M];

int main()
{
    cin >> n >> m;
    f[0] = 1;
    for (int i = 1; i <= n; i ++ )
    {
        int v;
        cin >> v;
        for (int j = v; j <= m; j ++ )
            f[j] = f[j] + f[j - v];
    }
    cout << f[m] << endl;
    return 0;
}


