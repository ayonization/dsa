#include<bits/stdc++.h>
using namespace std;


class Animal{

    public:

    void makeSound(){

        cout<<"Make animal sound"<<endl;
    }
};


class Dog : public Animal {

    public:

    void makeSound(){

        cout<<"Bark"<<endl;
    }

};

int main(){

    Animal animal;
    Dog dog;

    animal.makeSound();
    dog.makeSound();
}