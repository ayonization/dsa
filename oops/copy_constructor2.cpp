#include<bits/stdc++.h>
using namespace std;

class Myclass {

    public : 

    int x;
    int y;
    int *p;

    Myclass(){

        p = new int;
    }

    Myclass(Myclass &obj){

        p = new int;
        x = obj.x;
        y = obj.y;
        *p = *(obj.p);  
    }

    ~Myclass(){

        cout<<"Destructor invoked"<<endl;
    }
    
    void setData(int a,int b,int c){

        x = a;
        y = b;
        *p = c;
    }

};

int main(){

    Myclass obj;
    obj.setData(2,3,4);

    Myclass obj2(obj);


    cout<<*(obj.p)<<endl;
    cout<<*(obj2.p)<<endl;

    *(obj.p)=10;
   

    cout<<*(obj.p)<<endl;
    cout<<*(obj2.p)<<endl;

   

}