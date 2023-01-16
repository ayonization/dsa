#include<bits/stdc++.h>
using namespace std;

void print(int n){

    if(n==1){
        cout<<1<<" ";
        return;
    }

    cout<<"call "<<n-1<<endl;   
    print(n-1);
    cout<<n<<" ";
}

int main(){

    int n;
    cin>>n;
    cout<<endl;

    print(n);
}