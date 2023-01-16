#include<bits/stdc++.h>
using namespace std;
int first_or_last_occurrence(int a[],int x,int start,int end,bool search_first){

    int ans = -1;

    while(start<=end){

        int mid = start + (end-start)/2;

        if(a[mid]==x) 
        {
            ans = mid+1;
            if(search_first) end = mid-1;
            else start = mid+1;
        }
        if(a[mid]>x) end = mid-1;
        else start = mid+1;
    }

    return ans;
}

int main(){

    int a[10];

    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=10;
    a[5]=10;
    a[6]=10;
    a[7]=10;
    a[8]=20;
    a[9]=30;


    int first = first_or_last_occurrence(a,10,0,9,true);
    cout<<first<<endl;

    int last = first_or_last_occurrence(a,10,0,9,false);
    cout<<last<<endl;

    int count = last - first +1;
    count = max(count,0);

    cout<<count<<endl;
}