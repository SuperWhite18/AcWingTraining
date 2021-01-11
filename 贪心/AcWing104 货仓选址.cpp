/*
题目链接：https://www.acwing.com/problem/content/106/
*/

//代码实现：
#include<iostream>
#include<algorithm>
using namespace std;

const int N=100010;
int n,a[N],res=0;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    
    sort(a,a+n);
    
    for(int i=0;i<n;i++) res+=abs(a[i]-a[n/2]);
    
    cout<<res<<endl;
    return 0;
}

