#include<bits/stdc++.h>
using namespace std;

void bubble_sort_normal(int a[]){

    for(int i = 0;i<10;i++){
        bool swapped = false;
        for(int j = 0;j<10-i-1;j++){

            if(a[j]>a[j+1]) {
                swap(a[j],a[j+1]);
                swapped = true;
            }
        }

        if(!swapped) break;
    }
}

void bubble_sort_recursive(int a[],int n){
    
    if(n<=1) return;

    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1]) swap(a[i],a[i+1]);
    }

    bubble_sort_recursive(a,n-1);

}

int main(){

    int a[10] = {10,2,3,9,5,4,1,8,6,7};

    bubble_sort_recursive(a,10);

    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
    
}
