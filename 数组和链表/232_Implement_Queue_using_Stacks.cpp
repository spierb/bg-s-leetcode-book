#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
private:
    stack<int> in;
    stack<int> out;
public:
    /** Initialize your data structure here. */
    MyQueue() {
        stack<int> in;
        stack<int> out;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        in.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(out.empty())
        {
            while(!in.empty())
            {
                out.push(in.top());
                in.pop();
            }
        }
        int i = out.top();
        out.pop();
        return i;
    }
    
    /** Get the front element. */
    int peek() {
        if(out.empty())
        {
            while(!in.empty())
            {
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(in.empty()&&out.empty()) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main(int argc, char* argv[])
{
    MyQueue a1;
    a1.push(1);
    a1.push(2);
    a1.push(3);
    cout << a1.peek() << endl;
    return 0;

}