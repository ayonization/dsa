/*
    Problem statement: Find index of an element in a rotated sorted array

    Solution: 1) Identify index of minimum element
              2) arr[0.....mine_el-1] and a[min_el.....n-1] are sorted
              3) Eg : a[11,12,15,18,2,5,6,8]
                 [11,12,15,18] and [2,5,6,8] are sorted
              4) Apply binary search on both arrays separately to find element
*/

#include<bits/stdc++.h>
using namespace std;

int find_min_index(int a[],int start,int end,int n){

    int ans = -1;

    while(start<=end){

        if(a[start]<a[end]) return start;

        int mid = start + (end-start)/2;

        int left = mid-1;
        int right = mid+1;

        if(mid==0) left = n-1;
        if(mid==n-1) right = 0;

        if(a[mid]<a[left] and a[mid]<a[right]) return mid;

        if(a[mid]<a[start]) end = mid-1;

        else start = mid+1;
    }

    return ans;
}

int bs(int a[],int start,int end,int x){

    int ans = -1;

    while(start<=end){

        int mid = end+(start-end)/2;

        if(a[mid]==x) return mid+1;

        if(a[mid]<x) start = mid+1;

        else end = mid-1; 
    }

    return ans;
}

int find_index(int a[],int start,int end,int min_in,int n,int x){

        // Apply binary search on a[0....min_in-1] and a[min_in...n-1]
        return max(bs(a,start,min_in-1,x),bs(a,min_in,end,x));    
}
int main(){

    int a[] = {11,12,15,18,2,5,6,8};

    int n = 8;
    int start = 0;
    int end = 7;

    int x;
    cin>>x;

    int min_in = find_min_index(a,start,end,n);

    int ans = find_index(a,start,end,min_in,n,x);

    if(ans==-1) cout<<"Element not found";
    else cout<<ans<<endl;

}