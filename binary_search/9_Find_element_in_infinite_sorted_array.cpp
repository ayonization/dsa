/*

Problem : Find index of an element in an infinite sorted array

Solution : 1) To apply binary search, first find start and end index in the infinite array
           2) Once element lies betweeen start and end, normal binary search can be applied
           3) Initialise start as 0 and end as 1
           4) Multiply end by 2 until a[end] > el
           5) Update start to previous end 
           6) Now, a[end]> el and a[start]<= el, so apply binary search

*/


#include<bits/stdc++.h>
using namespace std;

int bs(int a[],int start,int end,int el){

    while(start<=end){

        int mid = end + (start-end)/2;

        if(a[mid]==el) return mid+1;

        else if(a[mid]>el) end = mid-1;

        else start = mid+1;
    }

    return -1;
}

int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    int start = 0;
    int end = 1;

    int el;
    cin>>el;

    while(a[end]<el){

        start = end;

        end = end*2;
    }

    int ans = bs(a,start,end,el);

    cout<<ans<<endl;
}