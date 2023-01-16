#include<bits/stdc++.h>
using namespace std;

int bs(int a[],int x,int start,int end){

    int mid = (start+end)/2;

    if(start<=end){

            if(a[mid]==x) return mid+1;

             else if(a[mid]>x){

                 return bs(a,x,start,mid-1);
            }

             else{
        
                 return bs(a,x,mid+1,end);
            }
    }
    
    return -1;
}

int main(){

    int a[10];

    for (int i = 0; i < 10; i++)
    {
        a[i]= i+1;
    }

    int x = 10;

    int ans = bs(a,x,0,9);

    cout<<ans<<endl;
    
}