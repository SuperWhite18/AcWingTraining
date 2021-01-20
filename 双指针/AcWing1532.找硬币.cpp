/*
题目链接：
https://www.acwing.com/problem/content/1534/
*/

//代码实现：
#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int n,m;
const int N=100010;
int w[N];

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) scanf("%d",&w[i]);
    
    sort(w,w+n);
    
    for(int i=0,j=n-1;i<j;i++)
    {
        while(i<j&&w[i]+w[j]>m) j--;
        if(i<j&&w[i]+w[j]==m)
        {
            printf("%d %d",w[i],w[j]);
            return 0;
        }
    }
    printf("No Solution");
    return 0;
}
