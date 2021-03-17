//题目链接 ：
https://leetcode-cn.com/problems/shun-shi-zhen-da-yin-ju-zhen-lcof/

//代码实现：
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> res;
        if (matrix.empty()) return res;
        int n = matrix.size(), m = matrix[0].size();
        //二维数组记录是否被访问过
        vector<vector<bool>> st(n, vector<bool>(m, false));
        //右 下 左 上
        int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
        //初始点（0，0） 先往右下标点为1
        int x = 0, y = 0, d = 1;
        for (int k = 0; k < n * m; k ++ )
        {
            res.push_back(matrix[x][y]);
            st[x][y] = true;

            int a = x + dx[d], b = y + dy[d];
            //判定边界情况 
            if (a < 0 || a >= n || b < 0 || b >= m || st[a][b])
            {
                d = (d + 1) % 4;//顺时针转一下
                a = x + dx[d], b = y + dy[d];//更新坐标
            }
            x = a, y = b;
        }  
        return res;
    }
};