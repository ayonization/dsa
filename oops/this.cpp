#include<bits/stdc++.h>
using namespace std;

class Myclass {

    public:

    int id;
    int age;

    Myclass(int id,int age){

        this->id = id;
        this->age = age;
    }

    void display(){

        cout<<id<<" "<<age<<endl;
    }
};

int main(){


    Myclass obj(1,22);

    obj.display();
}