//题目链接：
https://www.acwing.com/problem/content/description/62/


//代码实现：
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *findFirstCommonNode(ListNode *headA, ListNode *headB) 
    {
        auto p1=headA,p2=headB;
        while(p1!=p2)
        {
            if(p1) p1=p1->next;
            else p1=headB;
            if(p2) p2=p2->next;
            else p2=headA;
        }
        return p1;
        
        
    }
};