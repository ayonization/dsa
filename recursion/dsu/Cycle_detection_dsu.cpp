#include<bits/stdc++.h>
using namespace std;
map<int,int> parent;
map<int,int> sz;


void make(int v){

    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v){

    if(v == parent[v]) return v;

    else return parent[v] = find_set(parent[v]);
}

void union_set(int a,int b){

        a = find_set(a);
        b = find_set(b);

        if(a!=b) {

            if(sz[a]<sz[b]) swap(a,b);

            parent[b] = a;

            sz[a] += sz[b];
        }
}

int main (){

        int n;
        cin>>n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            make(a[i]);
        }

        int noEdges;
        cin>>noEdges;

        vector<pair<int,int>> edges;

        for (int i = 0; i < noEdges; i++)
        {
            int u,v;
            cin>>u>>v;

            pair<int,int> p;

            p.first = u;
            p.second = v;

            edges.push_back(p);
        }


        bool cycleFound = false;

        /*
            Iterate over all edges
            If both nodes in edge already belong to same set, cycle is found
            Else union the two nodes and move on to next edge
        */

        for(auto i : edges){

            int u = i.first;
            int v = i.second;

            if(find_set(u) == find_set(v)) cycleFound = true;

            else union_set(u,v);
        }
        
        if(cycleFound) cout<<"Cycle is found"<<endl;

        else cout<<"No cycle";
}