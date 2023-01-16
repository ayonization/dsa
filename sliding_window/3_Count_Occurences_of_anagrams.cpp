#include<bits/stdc++.h>
using namespace std;
int main(){

    string s1,s2;

    cin>>s1>>s2;

    map<char,bool> isPresent;
    map<char,int> countLetter;

    for(char x: s2){

        isPresent[x] = true;
        countLetter[x]+=1;
    }

    int count = countLetter.size();

    int s = 0;
    int e = 0;

    int ans = 0;

    while(e<s1.size()){

        if(isPresent[s1[e]]){

            countLetter[s1[e]]-=1;
            if(countLetter[s1[e]]==0) count-=1;
        }

        if(e-s+1<s2.size()) e+=1;

        else if(e-s+1==s2.size()){

            if(count==0) ans+=1;

            if(isPresent[s1[s]]){

                if(countLetter[s1[s]]==0) count+=1;

                countLetter[s1[s]]+=1;
            }
            e+=1;
            s+=1;
        }
    }
    
    cout<<ans<<endl;
}