//题目链接：
https://www.acwing.com/problem/content/484/

//代码实现：
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
const int N=110;
int n;
int h[N];
int f[N],g[N];


int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>h[i];
    
    for(int i=1;i<=n;i++)
    {
        f[i]=1;//初始化
         for(int j=1;j<i;j++)
          if(h[j]<h[i])
           f[i] = max(f[i], f[j] + 1);
    }
    
    for (int i = n; i; i -- )
    {
        g[i] = 1;
        for (int j = n; j > i; j -- )
            if (h[j] < h[i])
                g[i] = max(g[i], g[j] + 1);
    }
    
    
    int res = 0;
    for (int i = 1; i <= n; i ++ ) res = max(res, f[i] + g[i] - 1);//因为正反向都算了一遍 所以-1

    printf("%d\n", n - res);

    return 0;
    
}
