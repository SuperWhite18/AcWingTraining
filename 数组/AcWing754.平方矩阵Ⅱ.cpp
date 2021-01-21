/*
题目链接：
https://www.acwing.com/problem/content/756/
*/

//代码实现：
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 110;

int n;
int a[N][N];

int main()
{
    while (cin >> n, n)
    {
        for (int i = 1; i <= n; i ++ )
        {
            for (int j = i, k = 1; j <= n; j ++, k ++ )
            {
                a[i][j] = k;
                a[j][i] = k;
            }
        }

        for (int i = 1; i <= n; i ++ )
        {
            for (int j = 1; j <= n; j ++ )
                cout << a[i][j] << ' ';
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}



