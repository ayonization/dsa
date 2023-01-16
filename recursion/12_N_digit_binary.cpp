#include<bits/stdc++.h>
using namespace std;

void solve (string out,int one,int zero,int n){

    if(one+zero==n){
        cout<<out<<endl;
        return;
    }

    string out1 = out;
    string out2 = out;

    out1.push_back('1');
    solve(out1,one+1,zero,n);

    if(one>zero){

        out2.push_back('0');
        solve(out2,one,zero+1,n);
    }

    return;
}
int main(){

    int n;
    cin>>n;

    int one = 0;
    int zero =0;
    string out = "";
    solve(out,one,zero,n);
}