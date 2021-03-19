//题目链接：
https://www.acwing.com/problem/content/40/
//代码实现：

class Solution {
public:
    bool isPopOrder(vector<int> pushV,vector<int> popV) 
    {
        if(popV.size()!=pushV.size()) return false;
        stack<int> s;
        int index=0;
        for(int i=0;i<pushV.size();i++){
            s.push(pushV[i]);
            while(!s.empty() && s.top()==popV[index]){
                s.pop();
                index++;
            }
        }
        if(s.empty())
            return true;
        return false;
    }
};