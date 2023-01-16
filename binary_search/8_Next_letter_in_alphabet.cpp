/*
Problem statement : Given a charecter find the next greatest charecter in a sorted charecter array

Solution : 1) Similar to ceil of an element problem
           2) Smallest element greater than given charecter is the answer
           3) Unlike ceil, if the given charecter is present in the array, do not return it
              Search for charecters greater than it

*/


#include<bits/stdc++.h>
using namespace std;

char next_letter(char arr[],int start,int end,char ch){

    char ans = '*';

    while(start<=end){

        int mid = end + (start-end)/2;

        if(arr[mid]>ch){

            ans = arr[mid];
            end = mid-1;
        }

        else start = mid+1;
    }

    return ans;
}

int main(){
      
    char arr[] = {'a','b','c','g','i','j','l','o'};

    int size = 8;
    char ch ;
    cin>>ch;

    char ans = next_letter(arr,0,size-1,ch);

    cout<<ans<<endl;
}