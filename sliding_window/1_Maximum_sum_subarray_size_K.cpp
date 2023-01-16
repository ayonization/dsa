/*
Problem : Given an array and an integer k, Find the maximum sum of a subarray of size k.

Solution : Use sliding window concept
           1) Initialise start and end pointers to zero
           2) Iterate over end pointer until it exceeds bounds
           3) If window hasnt reached required size (k) increment end pointer until the window 
              is of required size
           4) If window is of size k, compare the sum of this window with max sum so far
           5) Update max sum so far and remove start element from current sum
           6) Update the start pointer and end pointer by 1 (shifting window by 1)

*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int s = 0;
    int e = 0;
    int sum = 0;
    int ans = -1;

    while(e<n){

        sum += a[e];

        if((e-s+1)<k) e++;

        else if((e-s+1)==k){

            ans = max(ans,sum);
            sum-=a[s];
            s+=1;
            e+=1;
        }
    }

    cout<<ans<<endl;
}