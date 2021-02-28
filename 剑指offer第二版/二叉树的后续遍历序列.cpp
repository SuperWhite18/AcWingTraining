//题目链接：
https://www.acwing.com/problem/content/44/

//代码实现：
class Solution 
{
public:
    vector<int> seq;
    bool verifySequenceOfBST(vector<int> sequence) 
    {
        seq=sequence;
        if(seq.empty()) return true;
        return dfs(0,seq.size()-1);
       
    }
    bool dfs(int l,int r)
    {
        if(l>=r) return true;
        int root=seq[r];
        int k=l;
        while(k<r&&seq[k]<root) k++;
        for(int i=k;i<r;i++)
        if(seq[i]<root) return false;
        return dfs(l,k-1)&& dfs(k,r-1);
    }
};