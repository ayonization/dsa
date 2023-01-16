#include<bits/stdc++.h>
using namespace std;
int agnostic_binary_search(int a[],int x,int start,int end)
{
    if(start==end){

        if(a[start]==x) return start+1;

        return -1;
    }

    bool is_asc = false;
    if(a[start]<a[end]) is_asc = true;

    while(start<=end){

        int mid = start + (end-start)/2;

        if(a[mid]==x) return mid+1;

        else if(a[mid]>x){

            if(is_asc) end = mid-1;
            else start = mid+1;
        }

        else
        {
            if(is_asc) start = mid+1;
            else end = mid-1;
        }
        
    }

    return -1;

}

int main(){

    int n = 10;

    int asc[n];
    int dsc[n];

    int largest = 10;

    for (int i = 0; i < n; i++)
    {
        asc[i] = i+1;
    }

    for (int i = 0; i < n; i++)
    {
        dsc[i] = largest;
        largest-=1;
    }

    bool is_ascending;

    int start = 0;
    int end = n-1;

    int x;
    cin>>x;

    int ans = agnostic_binary_search(dsc,x,start,end);
    cout<<ans<<endl;
}

// asc
// 0 1 2 3 4 5 6 7 8 9 
// 1 2 3 4 5 6 7 8 9 10

// dsc 
//  0 1 2 3 4 5 6 7 8 9 
// 10 9 8 7 6 5 4 3 2 1