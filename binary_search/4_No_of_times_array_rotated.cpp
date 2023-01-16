/*
    Problem statement: Find number of times a sorted arary has been rotated(clockwise)

    Solution : 1) Find smallest element in array
               2) Index of smallest element gives answer
                  Eg : [8,9,10,1,2,3,4,5,6,7] index(1) = 3, Ans = 3
               3) Search for smallest element using binary search
               4) If an element is smaller than both its neighbours, it is smallest
               5) Else, search for smallest element in unsorted half of array [start...mid...end]
               6) If a[start...mid...end] is sorted, first element is smallest
*/

#include<bits/stdc++.h>
using namespace std;

int noSorted(int a[],int start,int end,int n){

    int ans = -1;

    while(start<=end){

        // If array is sorted, first element is smallest
        // Return first element
        if(a[start]<a[end]) return start;

        int mid = start + (end-start)/2;

        int left = mid-1;
        int right = mid+1;

        if(mid==0) left = n-1;
        if(mid==n-1) right = 0;

        // If an element is smaller than both neighbours,
        // It is smallest element in array
        if(a[mid]<a[left] and a[mid]<a[right]) return mid;

        // Search for minimum element in the unosrted half of array
        // If a[mid]<a[start] then left half is unsorted (end = mid-1)
        // Eg: a = [9,10,1,2,3,4,5,6,7,8]  mid points to 3
        // 3<9 therefore smallest element in left half
        else if(a[mid]<a[start]) end = mid - 1;

        // Else right half is unsorted
        // Eg: a = [5,6,7,8,9,10,1,2,3,4] mid points to 9
        // 9<4 and 9>5 so smallest element in right half
        else start = mid + 1;
    }

    return ans;
}

int main(){
//              0 1 2 3 4  5 6 7 8 9
    int a[] =  {4,5,6,7,8,9,10,1,2,3};

    int n = 10;
    int start = 0;
    int end = 9;
    int ans = noSorted(a,start,end,n);

    cout<<ans<<endl;


}

// 1 2 3  4 5 6 7 8 9 10
// 8 9 10 1 2 3 4 5 6 7