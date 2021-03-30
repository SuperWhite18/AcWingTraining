//题目链接：
https://www.acwing.com/problem/content/76/

//代码实现：
class Solution {
public:
    vector<int> numberOfDice(int n) {
        vector<vector<int>> f(n + 1, vector<int>(6 * n + 1, 0));
        f[0][0] = 1;
        for (int i = 1; i <= n; i ++ )
            for (int j = 1; j <= i * 6; j ++ )
                for (int k = 1; k <= 6; k ++ )
                    if (j >= k)
                        f[i][j] += f[i - 1][j - k];
        return vector<int>(f[n].begin() + n, f[n].end());
    }
};

