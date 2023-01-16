#include<bits/stdc++.h>
using namespace std;
class Myclass {

    public:

    int x;

    Myclass(int i){

        x = i;
    }

    Myclass(Myclass &obj){

        x = obj.x;
    }
};

int main(){

    Myclass a(20);

    Myclass b(a);

    cout<<b.x<<endl;
}