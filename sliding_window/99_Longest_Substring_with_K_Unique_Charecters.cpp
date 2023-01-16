#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    int k;
    cin>>s;
    cin>>k;

    int i = 0;
    int j = 0;

    map<char,int> mp;
    int ans = -1;

    while(j<s.size()){

        mp[s[j]]+=1;

        if(mp.size()<k) j+=1;

        else if(mp.size()==k){

            ans = max(ans,j-i+1);

            j+=1;
        }

        else {

            while(mp.size()>k){

                mp[s[i]]-=1;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i+=1;
                if(mp.size()==0) ans = max(ans,j-i+1);
            }

            j+=1;

        }
    }
    
    cout<<ans<<endl;
}