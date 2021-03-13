//题目链接：
https://www.acwing.com/problem/content/85/

//代码实现：

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    void deleteNode(ListNode* node) 
    {
        node->val=node->next->val;
        node->next=node->next->next;
        
    }
};