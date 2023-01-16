#include<bits/stdc++.h>
using namespace std;
 void solve(string ip, string op){

    if(ip.size()==0) {
        cout<<op<<endl;
        return;
    }

    char first = ip[0];
    char upper = toupper(first);

    ip.erase(0,1);

    string op1 = op;
    string op2 = op;

    op1.push_back(first);
    op2.push_back(upper);

    solve(ip,op1);
    solve(ip,op2);

    return;
 }
 
 int main(){

    string s;
    cin>>s;

    string ip = s;
    string op = "";
    solve(ip,op);
 }