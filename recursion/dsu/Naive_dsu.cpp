#include<bits/stdc++.h>
using namespace std;

// Mapping every element to its parent
map<int,int> parent;

// Initialise parent of every element as itself
void make(int v){

    parent[v] = v;
}

// If an element is its own parent, it is the leader of the set
// Else find leader of its parent
int find_set(int v){

    if(parent[v] == v) return v;

    return find_set(parent[v]);
}

// To union two elements, find their leaders
// Set leader of one element as parent of leader of other
void union_sets(int a,int b){

    int leader_a = find_set(a);
    int leader_b = find_set(b);

    if(leader_a!=leader_b) parent[leader_b] = leader_a;
}

int main(){

    int n;
    cin>>n;

    int a[n];              // a[] = [1 2 3 4]

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        make(a[i]);
    }

    union_sets(a[0],a[1]); // union 1,2
    union_sets(a[2],a[3]); // union 3,4

    union_sets(a[1],a[3]); // union 2,4

    /*
             1              
            / \
           2   3
                \
                 4
    */

   for (int i = 0; i < n; i++)
   {
     cout<<parent[a[i]]<<" ";       // 1 1 1 3
   }
   
   cout<<endl;
   
   for (int i = 0; i < n; i++)
   {
        cout<<find_set(a[i])<<" ";  // 1 1 1 1
   }

}