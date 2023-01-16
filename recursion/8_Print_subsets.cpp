#include<bits/stdc++.h>
using namespace std;
void printSubsets(string ip,string op){

    if(ip.size()==0){

        cout<<op<<endl;
        return;
    }

    char first = ip[0];

    ip.erase(0,1);

    printSubsets(ip,op);
    op.push_back(first);
    printSubsets(ip,op);

    return;
}
int main(){

    string s;
    cin>>s;

    string ip = s;
    string op = "";

    printSubsets(ip,op);
}