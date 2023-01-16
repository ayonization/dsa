#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int x;  
        cin>>x;

        nums.push_back(x);
    }

    deque<int> q;

        int s = 0;
        int e = 0;

        vector<int> ans;
        
        while(e<nums.size()){
            

            while(q.size()>0 and q[q.size()-1]<nums[e]) q.pop_back();
            q.push_back(nums[e]);

            if(e-s+1<k) e+=1;

            else if(e-s+1==k){

                ans.push_back(q[0]);

                if(nums[s]==q[0]) q.pop_front();

                s+=1;
                e+=1;
            }
        }
    
}