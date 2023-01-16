#include<bits/stdc++.h>
using namespace std;

map<int,int> parent;
map<int,int> size_set;


void make(int v){
    parent[v] = v;
    size_set[v] = 1;
}

int find_set(int v){

    if(v==parent[v]) return v;

    return parent[v] = find_set(parent[v]);  // Path Compression (reduces complexity to log(n))
}

/*
                        *** Path Compression *** 

        Parent of all elements on path to 7 from root assigned to root(leader of set)

        Naive DSU (O(n))         Path Compression (O(log(n)))
            1                           1
            |                    ---------------
            2                    |   |     |   |  
           / \                   2   3     5   7   
          3   4      ====>       |   |   
         / \                     4   6
        5   6                        |   
       /     \                       8
      7       8
                
*/

void union_sets(int a,int b){

    a = find_set(a);
    b = find_set(b);

    if(a!=b){

        if(size_set[a]>size_set[b]) swap(a,b);

        parent[b] = a;

        size_set[a] += size_set[b];
    }
     
}

/*
                                    Union by size/rank

        Assign leader of smaller set to leader of larger set to reduce time complexity to O(1)

                a                           b

                x                           y
            ----------                      |
            |  |  |  |                      y
            x  x  x  x

            Assign leader of a as parent of leader of b


                            x                Size a += Size b
                    ------------------ 
                    |   |   |   |   |
                    x   x   x   x   y
                                    |
                                    y

*/

int main(){

    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        make(a[i]);
    }

    union_sets(a[0],a[1]);
    union_sets(a[2],a[3]);

    union_sets(a[1],a[3]);

    for (int i = 0; i < n; i++)
    {
        cout<<parent[a[i]]<<" ";
    }

    cout<<endl;
    
    
}