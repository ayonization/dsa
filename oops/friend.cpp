#include<bits/stdc++.h>
using namespace std;

class A;
class B;

class A {

    private: 
    int x;

    public: 

    void setData(int x){

        this->x = x;
    }

    friend int minimum(A,B);
};

class B {

    private :
    int x;

    public: 

    void setData(int x){

        this->x = x;
    }

    friend int minimum(A,B);
};

int minimum (A a,B b){

    return min(a.x,b.x);
}

int main(){

    A a;
    B b;

    a.setData(10);
    b.setData(20);

    cout<< minimum(a,b)<<endl;
}