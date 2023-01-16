#include<bits/stdc++.h>
using namespace std;


stack<int> insert(stack<int> s, int top){

    if(s.size()==0 or s.top()<top){
        s.push(top);
        return s;
    }

    int last = s.top();
    s.pop();

    s = insert(s,top);
    s.push(last);

    return s;
}

stack<int> sortRec(stack<int> s){

    if(s.size()==1) return s;

    int top = s.top();
    s.pop();

    s = sortRec(s);
    s = insert(s,top);

    return s;
}
int main(){

    stack<int> s;

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }

    s = sortRec(s);

    while (s.size())
    {
        int x = s.top();

        cout<<x<<" ";
        s.pop();
    }
    
}

