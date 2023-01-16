#include<bits/stdc++.h> 
using namespace std;
void solve(string out, int op,int cl){

    if(op == 0 and cl == 0){

         cout<<out<<endl;
         return;
    }

    string out2 = out;
    string out3 = out;

    if(op>0){

        out2.push_back('(');
        solve(out2,op-1,cl);
    }

    if(cl>0 and cl>op){

        out3.push_back(')');
        solve(out3,op,cl-1);
    }

    return;

}
int main(){

    int n;
    cin>>n;
    string out = "";
    solve(out,n,n);
}