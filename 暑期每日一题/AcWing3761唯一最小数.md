```c++
思路：哈希
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 200010;

int n;
int w[N], cnt[N];

int main()
{
    int T;
    scanf("%d", &T);
    while (T -- )
    {
        scanf("%d", &n);
        memset(cnt, 0, (n + 1) * 4);
        for (int i = 0; i < n; i ++ )
        {
            scanf("%d", &w[i]);
            cnt[w[i]] ++ ;
        }
        int res = -1;
        for (int i = 0; i < n; i ++ )
            if (cnt[w[i]] == 1)
            {
                if (res == -1 || w[res] > w[i])
                    res = i;
            }
        if (res != -1) res ++ ;
        printf("%d\n", res);
    }
    return 0;
}


```

