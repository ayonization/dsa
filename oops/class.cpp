#include<bits/stdc++.h>
using namespace std;

class Myclass {

    public : 

    int age;
    int height;

    void sayhello(){

        cout<<"hello"<<endl;
    }

    void sayhi();

    int returnint(int integer);
};

void Myclass::sayhi(){

    cout<<"hi"<<endl;
}

int Myclass::returnint(int integer){

    return integer*2;
}

int main(){

    Myclass obj;

    obj.age = 22;
    obj.height = 177;


    cout<<obj.age<<endl;
    obj.sayhello();
    obj.sayhi();

    cout<<(obj.returnint(10))<<endl;
}