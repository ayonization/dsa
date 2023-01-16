#include<bits/stdc++.h>
using namespace std;
int dbs(int a[],int x,int start,int end){

    while (start<=end)
    {
        int mid = start + (end-start)/2;

        if(a[mid]==x) return mid+1;

        else if(a[mid]>x) start = mid+1;

        else end = mid-1;
    }

    return -1;
}

int main(){

    int large = 10;

    int a[10];

    for (int i = 0; i < 10; i++)
    {
        a[i] = large;
        large-=1;
    }

    int x;
    cin>>x;

    int ans = dbs(a,x,0,9);

    cout<<ans<<endl;
    
}

//  1 2 3 4 5 6 7 8 9 10
// 10 9 8 7 6 5 4 3 2 1