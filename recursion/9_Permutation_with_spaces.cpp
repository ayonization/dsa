#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op){

    if(ip.size()==0){
        cout<<op<<endl;
        return;
    }

    char first = ip[0];

    string op1 = op;
    string op2 = op;

    ip.erase(0,1);

    op1.push_back('_');
    op1.push_back(first);
    op2.push_back(first);

    solve(ip,op1);
    solve(ip,op2);

    return;
}

int main(){

    string s;
    cin>>s;

    string op = "";
    string ip = s;

    op.push_back(s[0]);
    ip.erase(0,1);

    solve(ip,op);

}