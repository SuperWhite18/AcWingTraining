/*
题目链接：
https://www.acwing.com/problem/content/1229/
*/

//代码实现：
#include <iostream>

using namespace std;

typedef long long LL;
const int N = 100010;

int n, m;
int h[N], w[N];

bool check(int mid)
{
    LL res = 0;
    for (int i = 0; i < n; i ++ )
    {
        res += (LL)h[i] / mid * (w[i] / mid);
        if (res >= m) return true;
    }
    return false;
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i ++ ) scanf("%d%d", &h[i], &w[i]);

    int l = 1, r = 1e5;
    while (l < r)
    {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }

    printf("%d\n", r);
    return 0;
}
