/*
        Problem : Find the element with least absolute difference to a given element in a sorted array
        
        Solution : 1) If the given element is present in the array, the answer is the element itself (difference = 0)
                   2) If the element is not present in the array, the answer is one of the two elements of the array
                      One which is the smallest element in the array greater than the element itself
                      The other which is the largest element in the array smaller than the element itself
                   3) This is because every other element of the array will have a difference greater than those two elements 
                   4) These two potential answers can be easily found out by binary search, after complettion of the search, the 
                      start and end pointer will point to those two elements
                   5) The answer is simply either of the elements which has a smaller difference 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[] = {1,3,8,10,12,15};

    int start = 0;
    int end = 5;

    bool elementFound  = false;

    int el;
    cin>>el;

    while(start<=end){

        int mid = end + (start-end)/2;

        if(a[mid]==el){

            elementFound = true;
            break;
        }

        if(a[mid]>el) end = mid -1;

        if(a[mid]<el) start = mid+1;
    }


    if(elementFound) cout<<el<<endl;

    else {


        int diffStart = INT_MAX;
        int diffEnd = INT_MAX;

        if(start<6 and start>=0) diffStart = abs(el-a[start]);

        if(end<6 and end>=0) diffEnd = abs(el-a[end]);


        if(diffStart<=diffEnd) cout<<a[start]<<endl;
        else if(diffStart>diffEnd) cout<<a[end]<<endl;
      

    }


    
}


