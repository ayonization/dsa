#include<bits/stdc++.h>
using namespace std;

int partition_array(int a[],int s,int e){

    int pivot = a[e];

    int pIndex = s;

    for (int i = s; i < e; i++)
    {
        if(a[i]<=pivot){

            swap(a[i],a[pIndex]);
            pIndex+=1;
        }
    }

    swap(a[pIndex],a[e]);

    return pIndex;
    
}
void quick_sort(int a[],int s, int e){

    if(s>e) return ;

    int pIndex = partition_array(a,s,e);

    quick_sort(a,s,pIndex-1);
    quick_sort(a,pIndex+1,e);
}
int main(){

    int a[] = {3,9,5,2,4,1,8,10,7,6};

    quick_sort(a,0,9);

    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
}