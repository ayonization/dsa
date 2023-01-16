/*

Problem : Given an unsorted array, return the index of any peak element
             Peak elememt: An element in the array which is greater than both
                           its adjacent elements.
                           Note: Start and end elements only need to be greater than their
                                 singlular adjacent element

            Eg: arr = [5,10,20,15]  20 is a peak element
            arr = [10,20,30,40,50] 50 is a peak element
                            
Solution : 1) Binary search can be used even though array is not sorted
           2) At each iteration, one half of the array is eliminated based on some criteria
           3) Perform binary search, check if a[mid] is a peak or not
           4) If a[mid] is a peak, simply return mid
           5) Else, search for a peak in that direction of mid where the adjacent element to mid is greater than a[mid]
              At least one neighbour of mid is > a[mid] since mid is not a peak
           6) It is guarenteed that that direction will yeild a peak.
              Law of rising curve, if array continues to rise from mid till the end, the last elememt is a peak
              Otherwise, if it increases after mid but then decreases, there must be a peak in the middle            
*/

#include<bits/stdc++.h>
using namespace std;
int find_peak(int arr[],int start,int end,int size){

     while(start<=end){

       int mid = start + (end-start)/2;

       if(mid>0 and mid<size-1){

            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]){

                return mid+1;
            }

            if(arr[mid+1]>arr[mid]) start = mid+1;

            if(arr[mid-1]>arr[mid]) end = mid-1;
       }

       else if(mid==0){

            if(arr[mid]>arr[mid+1]) return mid+1;

            else return mid+2;
       }

       else if(mid==size-1){

            if(arr[mid]>arr[mid-1]) return mid+1;

            else return mid;
       }

    }
    return -1;
}
int main(){

    int arr [] = {15,20,25,40,30,20,10,5};
                //0 1  2   3   4   5   6   7

    int size = 8;
    int start = 0;
    int end = size-1;

    int peak = find_peak(arr,start,end,size);

    cout<<peak<<endl;


}