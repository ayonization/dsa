#include<bits/stdc++.h>
using namespace std;

class Myclass{
    
    private: 
    int weight;

    public:
    int age;
    string name;
    Myclass(string s,int n,int w){

        cout<<"Constructor called"<<endl;

        age = n;
        name = s;
        weight = w;
    }

    void setWeight(int w){

        if(w<=100) weight = w;
    }

    void getWeight(){

        cout<<weight<<endl;
    }
};

class baseClass{

    public: 

    baseClass(){

        cout<<"Base class constructor called"<<endl;
    }

    string baseName = "base";

    void baseFun (){

        cout<<"Base class function"<<endl;
    }
};

class derivedClass:public baseClass{

    public: 

    derivedClass(){

        cout<<"Derived class constructor called"<<endl;
    }

    string derivedName = "derived";

    void derivedFun(){

        cout<<"Derived class function"<<endl;
    }
};

int main(){

    Myclass obj("Ayon",22,65);

    obj.setWeight(12);
    obj.getWeight();

    baseClass baseobj;
    derivedClass derobj;

    cout<<derobj.baseName<<endl;
    cout<<derobj.derivedName<<endl;

    derobj.baseFun();
    derobj.derivedFun();
}
