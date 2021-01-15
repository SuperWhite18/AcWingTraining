/*
题目链接：
https://www.acwing.com/problem/content/682/
*/
//代码实现：
#include<iostream>
#include<algorithm>
using namespace std;

const int N=1000010;
int n,m;
int a[N];

bool check(double mid)
{
    int s=0;//存当前可以切出的区间的个数
    for(int i=0;i<n;i++)//遍历所有绳子
    {
        s+=a[i]/mid;
        if(s>=m) 
           return true;
    }
    return false;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    double l=0,r=1e9;//定义端点的区间 （0，10的9次方）
    while(l-r>1e-4)
    {
        double mid=(l+r)/2;
        if(check(mid))//检查mid  落左边 落右边 
           l=mid;
        else
           r=mid;
    }
    printf("%.2lf\n",r);
    return 0;
}
