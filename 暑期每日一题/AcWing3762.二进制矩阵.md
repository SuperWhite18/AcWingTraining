```c++
思想：构造/思维题
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 110;

int n, m;
char g[N][N];

void pL(int i, int j, int k)
{
    if (!k) printf("%d %d %d %d %d %d\n", i, j, i + 1, j, i, j + 1);
    else if (k == 1) printf("%d %d %d %d %d %d\n", i, j - 1, i, j, i + 1, j);
    else if (k == 2) printf("%d %d %d %d %d %d\n", i - 1, j, i, j, i, j - 1);
    else printf("%d %d %d %d %d %d\n", i - 1, j, i, j, i, j + 1);
}

int main()
{
    int T;
    cin >> T;
    while (T -- )
    {
        cin >> n >> m;
        int res = 0;
        for (int i = 1; i <= n; i ++ )
        {
            cin >> g[i] + 1;
            for (int j = 1; j <= m; j ++ )
                if (g[i][j] == '1')
                    res += 3;
        }
        cout << res << endl;
        for (int i = 1; i <= n; i ++ )
            for (int j = 1; j <= m; j ++ )
                if (g[i][j] == '1')
                {
                    if (i < n && j < m)
                        pL(i, j, 0), pL(i, j + 1, 1), pL(i + 1, j, 3);
                    else if (i == n && j == m)
                        pL(i, j, 2), pL(i - 1, j, 1), pL(i, j - 1, 3);
                    else if (i == n)
                        pL(i, j, 3), pL(i - 1, j, 0), pL(i, j + 1, 2);
                    else
                        pL(i, j, 1), pL(i, j - 1, 0), pL(i + 1, j, 2);
                }
    }
    return 0;
}


	
```

