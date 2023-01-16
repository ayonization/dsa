/*
    Problem statement: Find the index of an element in a neraly sorted array

                       Nearly sorted array -> If a[] is a sorted array, then b[] is a nearly
                       sorted array if b[i] = a[i-1] or a[i] or a[i+1] for all i.
                       That is, each element may be shifted one position left or right from its
                       sorted position or not shifted at all. 

    Solution : 1) Use a modified binary search
               2) Check element to be found against a[mid], a[mid-1] and a[mid+1]
               3) If element is equal to any of the three, return that index
               4) Else, if element is greater than a[mid] continue searching from mid+2 to end
               5) Else search from start to mid-2
               6) All elements from and after mid+2 must be greater than mid.
               7) Similarly for mid-2

*/

#include<bits/stdc++.h>
using namespace std;

int mod_bin_search(int a[],int start,int end,int n,int x){

    int ans = -1;

    while(start<=end){

        int mid = end + (start-end)/2;

        if(a[mid] == x) return mid+1;

        if(a[mid+1]==x and mid<end) return mid+2;

        if(a[mid-1]==x and mid>start) return mid;


        // mid+1 is already checked, now check from mid+2 to end
        // if x>mid then x must lie between mid+2 to end
        if(x>a[mid]) start = mid+2;

        // mid-1 already checked, now check from start to mid-2
        // if x<mid then x must lie between start to mid-2
        else end = mid-2;
    }

    return ans;
}

int main(){

    int a[] = {10,3,40,20,50,80,70};

    int start = 0;
    int end = 6;
    int n = 7;

    int x;
    cin>>x;

    int ans = mod_bin_search(a,start,end,n,x);

    cout<<ans<<endl;
}