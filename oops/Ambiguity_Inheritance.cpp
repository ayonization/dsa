#include<bits/stdc++.h>
using namespace std;

class A{

    public : 
    void display(){

        cout<<"A"<<endl;
    }
};

class B {

    public : 
    void display(){

        cout<<"B"<<endl;
    }
};

class C: public A,public B {

    public:
    void show(){
        A::display();
    }
};



int main(){
    
    A a;
    a.display();
    B b;
    b.display();
    C c;
    c.show();
}