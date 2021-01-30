//题目链接：
https://www.acwing.com/problem/content/36/

//代码实现
class MyQueue
{
public:
    /** Initialize your data structure here. */
    stack<int> stack1; //push栈实现队列push操作
    stack<int> stack2; //pop栈实现队列pop操作
    MyQueue()
    {
    }

    /** Push element x to the back of queue. */
    void push(int x)
    {
        //直接将元素push进push栈stack1
        stack1.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop()
    {
        //将stack1所有元素push进stack2,则stack2栈顶元素为队头元素
        while(!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }

        //取队头元素，并将队头元素pop
        int s = stack2.top();
        stack2.pop();

        //将stack2中元素重新放回stack1中
        while(!stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
        return s;
    }

    /** Get the front element. */
    int peek()
    {
        while(!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        int s = stack2.top();

        while(!stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
        return s;
    }

    /** Returns whether the queue is empty. */
    bool empty()
    {
        return stack1.empty() && stack2.empty();
    }
};
