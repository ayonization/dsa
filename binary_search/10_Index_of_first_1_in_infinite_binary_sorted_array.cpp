/*
Problem : Find index of first occurrence of 1 in infinite binary sorted array
          Eg: 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1

Solution : 1) First find out range in which binary search needs to be carried out
           2) Set start = 0, end = 1
           3) While a[end] is zero, double end, update start to previous end
           4) Once start and end contain first one, perform first occurence binary search on the range

*/


#include<bits/stdc++.h>
using namespace std;

int bs(int a[],int start,int end){

    int ans = -1;

    while(start<=end){

        int mid = end + (start-end)/2;

        if(a[mid]==1){
            ans = mid+1;
            end = mid-1;
        }

        else start = mid+1;
    }

    return ans;
}

int main(){

    int a [] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

    int start = 0;
    int end = 1;

    while(a[end]==0){

        start = end;
        end = end*2;
    }

    int first_occ = bs(a,start,end);

    cout<<first_occ<<endl;
}