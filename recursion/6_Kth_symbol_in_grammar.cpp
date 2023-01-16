#include<bits/stdc++.h>
using namespace std;
int kth(int n,int k){

    if(n==1 and k==1) return 0;

    if(k%2==0) return 1 - kth(n-1,k/2);

    else return kth(n-1,(k+1)/2);
}
int main(){

    int n,k;
    cin>>n>>k;

    int ans = kth(n,k);
    cout<<ans<<endl;
}