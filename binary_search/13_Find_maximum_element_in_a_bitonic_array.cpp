/*
    Problem : Find the maximum element in a bitonic array
              Bitonic array - An array which at first increases monotonically (strictly increases)
                              and then decreases monotonically (strictly)

    Solution : The maximum element in a bitonic array is simply the peak element in the array

*/


#include<bits/stdc++.h>
using namespace std;

int max_element_in_bitonic(int arr[],int start,int end, int size){

    while(start<=end){
        
        int mid = start + (end-start)/2;

        if(mid>0 and mid<size-1){

            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]) return arr[mid];

            else if(arr[mid+1]>arr[mid]) start = mid+1;

            else if(arr[mid-1]>arr[mid]) end = mid-1;
        }

        if(mid==0){
            if(arr[mid]>arr[mid+1]) return arr[mid];

            else start = mid+1;
        }

        if(mid == size-1){

            if(arr[mid]>arr[mid-1]) return arr[mid];

            else end = mid-1;
        }
    }
    return -1;
}
int main(){

    int arr []= {1,2,3,4,5,6,7,1};

    int size = 8;

    int start = 0;
    int end = size -1;

    cout<<max_element_in_bitonic(arr,start,end,size);


}