/*
    Problem : Print the first negative number in every window of size k.
              If the window doesnt have any negative no, print 0
    
    Solution : 1) Initialise start and end pointers
               2) If a[end] is negative, store it in a queue
               3) If window is not of required size, simply increment end
               4) If window is of size k, first negative element in this window 
                  is the first element of the queue
               5) Now, if first element of window is the first element in the queue,
                  remove that element from the queue and increment start
               6) Else simply increment start

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

    queue<int> negatives;
    vector<int> ans;

    while(e<n){

        if(a[e]<0) negatives.push(a[e]);

        if(e-s+1<k) e+=1;

        else if(e-s+1==k) {


            if(negatives.size()==0) ans.push_back(0);

            else{

                ans.push_back(negatives.front());

                if(a[s]==negatives.front()) negatives.pop();
            }

            s+=1;
            e+=1;

        }
    }
    
    for(int x : ans) cout<<x<<" ";
}