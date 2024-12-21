#include <bits/stdc++.h>


using namespace std;


// why use list becuase in vector we can not insert somethingin in middle of vector it is not good as we know every data structure is used for some purpose 
// so inserting something on paticular index happen fast 

void explain_list(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(1);
    ls.push_front(2); // chep in coplexity 
    ls.emplace_front(2); 
    // all begin rend rfront all of vector function also there but there time complexity is  less 
    // here using insert into vector have higer complexity 
    // here list contain doubles linklist 
    // i know what is double linnklist  
    // it is a data structure where each node contain two pointer one to the next node and one to the previous node

}

void explain_deque(){
    deque<int> dq ;
    dq.push_back(1);
    dq.emplace_back(1);
    dq.push_front(2);
    dq.pop_front() ; // remove 2 it work for both fifo and lifo
    dq.emplace_front(2);

    dq.pop_back(); // remove
    dq.pop_front(); // remove
     dq.back(); // give last element
        dq.front(); // give first element


}
void explain_stack(){
    // stack work on lifo principle last in first out
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop(); // remove 4
    st.pop(); // remove 3
    st.top(); // give 2 it mean it give you what element is at the top of the stack 
    st.empty(); // it will return true if stack is empty else false
    // all the function of stack is not same as vector onlly pop push size empty that it 


}

void explain_queue(){
    // queue work on fifo principle first in first out
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop(); // remove 1
    q.pop(); // remove 2
    q.front(); // give 3 it mean it give you what element is at the front of the queue 
    q.back(); // give 4 it mean it give you what element is at the back of the queue 
    q.empty(); // it will return true if queue is empty else false
    // all the function of queue is not same as vector onlly push pop size empty that it

    queue<int> q1;
    q1.push(1);
    q.swap(q1); // it will swap the queue q and q1 mean data of q1 go go q and q go to q1

    
}



    