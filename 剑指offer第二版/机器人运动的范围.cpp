//题目链接：
https://www.acwing.com/problem/content/22/


//代码实现：
class Solution 
{
public:
    int get_sum(pair<int, int> p) 
    {
        int s = 0;
        while (p.first) 
        {
            s += p.first % 10;
            p.first /= 10;
        }
        while (p.second) 
        {
            s += p.second % 10;
            p.second /= 10;
        }
        return s;
    }

    int movingCount(int threshold, int rows, int cols)
    {
        
        if(!rows||!cols) return 0;
   
        queue<pair<int,int>> q;
        vector<vector<bool>> st(rows, vector<bool>(cols, false));
        
        //四个方向的数组
        int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

        int res = 0;
        q.push({0, 0});
        while (q.size()) 
        {
            auto t = q.front();
            q.pop();
            if (st[t.first][t.second] || get_sum(t) > threshold) continue;
            res ++ ;
            st[t.first][t.second] = true;
            for (int i = 0; i < 4; i ++ ) 
            {
                int x = t.first + dx[i], y = t.second + dy[i];
                if (x >= 0 && x < rows && y >= 0 && y < cols) q.push({x, y});
            }
        }

        return res;

    }
};
