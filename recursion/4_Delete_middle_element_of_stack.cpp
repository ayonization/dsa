#include<bits/stdc++.h>
using namespace std;

stack<int> deleteMiddle(stack<int> s, int size){

    if(s.size()== (size/2+1)){
        s.pop();
        return s;
    }

    int topel = s.top();
    s.pop();

    s = deleteMiddle(s,size);
    s.push(topel);

    return s;
}
int main(){

    int n;
    cin>>n;

    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }

    s = deleteMiddle(s,s.size());

    while (s.size())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    
}