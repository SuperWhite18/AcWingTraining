/*
题目链接：
https://www.acwing.com/problem/content/description/126/
*/

//代码实现
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b;
        string line_a,line_b;//a，b串
        cin>>a>>b>>line_a;
        
        vector<int> num;
        for(int i=0;i<line_a.size();i++)
        {
            if(line_a[i]>='0'&&line_a[i]<='9') num.push_back(line_a[i]-'0');
            if(line_a[i]>='A'&&line_a[i]<='Z') num.push_back(line_a[i]-'A'+10);
            if(line_a[i]>='a'&&line_a[i]<='z') num.push_back(line_a[i]-'a'+36);
        }
        reverse(num.begin(),num.end());

        vector<int> res;
        while(num.size())
        {
            int r=0;
            for(int i=num.size()-1;i>=0;i--)
            {
                num[i]+=r*a;
                r=num[i]%b;
                num[i]/=b;
            }
            res.push_back(r);
            while(num.size()&&num.back()==0) num.pop_back();
        }

        reverse(res.begin(),res.end());
        for(auto x:res)
        {
            if(x>=0&&x<=9) line_b+=char(x+'0');
            if(x>=10&&x<=35) line_b+=char(x+'A'-10);
            if(x>=36&&x<=61) line_b+=char(x+'a'-36);
        }
        cout<<a<<" "<<line_a<<endl;
        cout<<b<<" "<<line_b<<endl;
        cout<<endl;
    }
    return 0;
}

