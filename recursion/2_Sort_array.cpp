#include <bits/stdc++.h>
using namespace std;
vector<int> insert(vector<int> v, int el){

    if(v.size()==0){
        v.push_back(el);
        return v;
    }

    if(v[v.size()-1]>el){

        int last = v[v.size()-1];
        v.pop_back();

        v = insert(v,el);
        v.push_back(last);
    }
    else{
        v.push_back(el);
    }

    return v;
}
vector<int> sortRec(vector<int> v)
{

    if (v.size() == 1)
        return v;

    int last = v[v.size() - 1];

    v.pop_back();

    vector<int> sorted_v = sortRec(v);
    vector<int> ans;

    ans = insert(sorted_v,last);

    return ans;
}

// 1 2 3 4 6 7 8  insert 5
// 1 2 3 4
int main()
{

    vector<int> v;

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;

        v.push_back(x);
    }

    vector<int> ans = sortRec(v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
}