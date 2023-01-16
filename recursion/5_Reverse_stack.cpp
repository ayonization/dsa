#include<bits/stdc++.h>
using namespace std;
stack<int> insert(stack<int> s, int top){

    if(s.size()==0){
        s.push(top);
        return s;
    }

    int last = s.top();
    s.pop();

    s = insert(s,top);
    s.push(last);
    return s;
}

stack<int> reverseStack(stack<int> s){

    if (s.size() == 1)
        return s;

    int topel = s.top();
    s.pop();

    s = reverseStack(s);
    s = insert(s, topel);

    return s;
}
int main (){

    int n;
    cin>>n;

    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }

     s = reverseStack(s);
     

     while (s.size())
     {
        cout<<s.top()<<" ";
        s.pop();
     }
     
    
}