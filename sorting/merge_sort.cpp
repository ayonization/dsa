#include<bits/stdc++.h>
using namespace std;

void merge_func(int a[],int s,int mid,int e){

    int sizeFirst = mid-s+1;
    int sizeSecond = e - mid;

    int s1[sizeFirst], s2[sizeSecond];

    for (int i = 0; i < sizeFirst; i++)
    {
        s1[i] = a[s+i];
    }

    for (int i = 0; i < sizeSecond; i++)
    {
        s2[i] = a[mid+1+i];
    }

    int count = 0;

    int lp = 0;
    int rp = 0;

    int arrind = s;

    while((count<e-s+1) and (lp<sizeFirst and rp<sizeSecond)){

        if((s1[lp]<=s2[rp])){

            a[arrind] = s1[lp];

            lp+=1;
        }

        else if((s1[lp]>s2[rp])){

            a[arrind] = s2[rp];

            rp+=1;
        }


        arrind+=1;
        count+=1;

    }

    while(lp<sizeFirst){

        a[arrind] = s1[lp];
        lp+=1;
        arrind+=1;
    }

    while(rp<sizeSecond){

        a[arrind] = s2[rp];
        rp+=1;
        arrind+=1;
    }

    
    
}

void merge_sort(int a[],int s,int e){


    if(e<=s) return;

    int mid = (s+e)/2;

    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);

    merge_func(a,s,mid,e);

}

int main(){

    int a[] = {3,9,5,2,4,1,8,10,7,6};

    merge_sort(a,0,9);

    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    
}