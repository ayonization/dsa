#include<bits/stdc++.h>
using namespace std;


void insertion_sort(int a[],int n){

    for (int i = 1; i <n; i++)
    {
       int key = a[i];

       int j = i-1;

       while(j>=0 and a[j]>key){

          a[j+1] = a[j];
          j-=1;
       }

       a[j+1] = key;
        
    }
    
}
int main(){

    int a[] = {4,1,2,9,7,5,10,3,8,6};

    insertion_sort(a,10);

    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    
}