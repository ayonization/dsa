/*

    Problem : Search for an element in an matrix which is both row wise and column wise sorted

    Solution : 1) Start with top right index of the matrix
               2) If element is greater than a[mid] move mid downward by one step
               3) If element is smaller than a[mid] move mid left by one step
               4) Now compare again and repeat above steps
               5) This will take the shortest path to reach such element (O(n+m) time)
               6) If element does not exist, index of mid will go out of bounds
*/


#include<bits/stdc++.h>
using namespace std;

pair<int,int> find_el(int a[][4],int i,int j,int el,int n,int m){

    while((i>=0 and i<n)and(j>=0 and j<m)){

        if(a[i][j]==el){

            pair<int,int> ans = make_pair(i+1,j+1);
            return ans;
        } 

        if(el>a[i][j]) i++;

        else j--;
    }

   pair<int,int> p  = make_pair(-1,-1);
   return p;


}
int main(){

    // no of rows and columns
    int n,m;

    n = 4;
    m = 4;

    // every row and column is sorted

    int a[][4] = {{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,49},
                   {32,33,39,50}};

    int el;
    cin>>el;

    pair<int,int> ans = find_el(a,0,m-1,el,n,m);

    if(ans.first==-1) cout<<-1<<endl;
    else cout<<ans.first<<" "<<ans.second<<endl;

            
}