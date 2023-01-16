/*
    Probelem statement : Find floor of an element in a sorted array
                         Floor = Greatest element in array less than or equal to given
                         element

                         eg: Floor(4) in [1 2 3 5 6 7] is 4

    Solution : 1) Apply binary search
               2) If a[mid] == given element, return given element
               3) Store ans = -1;
               4) If a[mid]<element, a[mid] is a possible ans
               5) Store a[mid] in ans and look for greater ans towards right (start = mid+1)
               6) Else if a[mid]>x then a[mid] cannot be an answer, look for answers towards left
               
*/


#include<bits/stdc++.h>
using namespace std;

int find_floor(int a[],int start,int end,int el){

    int ans =-1;

    while(start<=end){

        int mid = end + (start-end)/2;

        if(a[mid]==el) return el;

        // a[mid] is a potential ans, store it and look for better ans towards right
        if(a[mid]<el){

            ans = a[mid];
            start = mid+1;
        }


        // a[mid] cannot be an ans, look for answers towards the left
        if(a[mid]>el){

            end = mid-1;
        }
    }

    return ans;
}

int main(){

    int a[] = {1,2,3,5,6,8,9,10,12,20};

    int sizearr = 10;

    int el;
    cin>>el;

    int ans = find_floor(a,0,sizearr-1,el);

    cout<<ans<<endl;


}