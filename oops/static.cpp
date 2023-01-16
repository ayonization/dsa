#include<bits/stdc++.h>
using namespace std;
class myClass{

    public:

    static int count;

    int x;
    int y;

    myClass(int x,int y){

        this->x = x;
        this->y = y;

        count+=1;
    }
};

int myClass::count = 0;

int main(){
    
    myClass obj1(1,2);
    myClass obj2(2,3);
    myClass obj3(3,4);

    cout<<(myClass::count)<<endl;
    
}