/*
题目链接：
https://www.acwing.com/problem/content/900/
*/

//代码实现：
#include<iostream>
using namespace std;

const int N=510;
int f[N][N];
int n;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>f[i][j];
        }
    }

    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            f[i][j]=max(f[i+1][j],f[i+1][j+1])+f[i][j];
            //原f[i][j]存储原三角形值，更新后的f[i][j]存新的状态值
        }
    }
    cout<<f[1][1]<<endl;
}
