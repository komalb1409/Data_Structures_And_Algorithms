#include<bits/stdc++.h>
using namespace std;


// We are using function call stack as our second stack

class queue1
{
    stack<int> s1;
    stack<int> s2;
    public:
        void push(int x)
        {
            s1.push(x);
        }

        int pop()
        {
            if(s1.empty())
            {
                cout<<"Queue is empty"<<endl;
                return -1;
            }

            int x = s1.top();
            s1.pop();
            if(s1.empty())
            {
                    return x;
            }

            int item = pop();
            s1.push(x);
            return item;
        }

        bool empty()
        {
            if(s1.empty())
            {
                return true;

            }

            return false;
        }
        
};

int main()
{
    queue1 q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<q.pop();
    q.push(5);
    cout<<q.pop()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    return 0;

}