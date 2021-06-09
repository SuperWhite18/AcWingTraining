#include<iostream>
using namespace std;
const int N = 10; 
int n;
int path[N];//保存序列
bool state[N];//位置是否被用过


void dfs(int u)
{
   if(u > n)//数字填完了则输出
   {
       for(int i = 1; i <= n; i++)
            cout << path[i] << " "; //输出方案
        cout << endl;
   }
   //空位上可以选择的数字为1~n
   for(int i = 1; i <= n; i++)
   {
       if(!state[i])//如果i位置没有被用过
       {
           path[u] = i;//放入空位
           state[i] = true;//数组被用，记为true
           dfs(u + 1);//填写下一个位置
           state[i] = false;//回溯
       }
   }
}

int main()
{
    cin >> n;
    dfs(1);
    return 0;
}
