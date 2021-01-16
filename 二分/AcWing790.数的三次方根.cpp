/*
题目链接：
https://www.acwing.com/problem/content/792/
*/
//代码实现
#include<iostream>
using namespace std;

int main()
{
    double x;
    cin>>x;
    double l=-10000,r=10000;
    while(r-l>1e-8)//题中要求范围是6位有效数字 这里多取两位 为了保险起见
    {
       double mid=(l+r)/2;
       if(mid*mid*mid>=x) r=mid;
       else l=mid;
    }
    printf("%lf",l);
    return 0;
}
