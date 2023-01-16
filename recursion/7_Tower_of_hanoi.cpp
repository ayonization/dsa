#include<bits/stdc++.h>
using namespace std;
void tower(int n, char s,char d,char h){

    if(n==1){

        cout<<n<<" moved from "<<s<<" to "<<d<<endl;
        return;
    }

    tower(n-1,s,h,d);
    cout<<n<<" moved from "<<s<<" to "<<d<<endl;
    tower(n-1,h,d,s);
    return;
}
int main(){

    int n;
    cin>>n;

    char s = 'A';
    char h = 'B';
    char d = 'C';

    tower(n,s,d,h);
}