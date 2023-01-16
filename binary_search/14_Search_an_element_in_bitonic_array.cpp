/*
    Problem : Search for an element in a bitnoic array and return its index

    Solution : 1) Bitonic arrays are first ascending then descending
               2) Array from the beggining till the peak is ascending
               3) From the peak till the end array is descening
               4) Perform two separate binary searches on these arrays 

*/


#include<bits/stdc++.h>
using namespace std;

int find_peak(int a[],int start,int end,int size){


    while(start<=end){

        int mid = start + (end-start)/2;

        if(mid>0 and mid<size-1){

            if(a[mid]>a[mid-1] and a[mid]>a[mid+1]) return mid;

            if(a[mid+1]>a[mid]) start = mid+1;

            else end = mid-1;
        }

        else if(mid==0){

            if(a[mid]>a[mid+1]) return mid;

            else start = mid+1;
        }

        else if (mid==size-1){

            if(a[mid]>a[mid-1]) return mid;

            else end = mid-1;
        }
    }

    return -1;
}

int bs(int a[],int start,int end,int el,bool is_asc){

    while(start<=end){

        int mid = start + (end-start)/2;

        if(a[mid]==el) return mid+1;

        else if(a[mid]>el){

            if(is_asc) end = mid-1;
            else start = mid+1;
        }

        else {

            if(is_asc) start = mid+1;
            else end = mid-1;
        }
        
    }

    return -1;
}
int main(){

    int a[] = {2,10,20,30,40,50,25,15,5};


    int peakIndex = find_peak(a,0,8,9);

    int el;
    cin>>el;

    int ans1 = bs(a,0,peakIndex-1,el,true);
    int ans2 = bs(a,peakIndex,8,el,false);

    int ans = max(ans1,ans2);
    
    if(ans==-1) cout<<"Element does not exist"<<endl;

    else cout<<ans<<endl;

    
    
}