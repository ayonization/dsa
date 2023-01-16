#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define int ll
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6+13, M = N;
//=======================
vi g[N];
int a[N];
int n, m, k, i;
//=======================

void solve() {
  cin >> n;
  int a[n];

  set<int> s;
  fo(i,n){
    cin>>a[i];
    s.insert(a[i]);
  }

  if(s.size()<2) cout<<"NO"<<endl;

  else {

    cout<<"YES"<<endl;
    int s = 0;
    int e = n-1;

    int count = 0;

    while(count<n){

        if(count%2==0){

            cout<<a[s]<<" ";
            s+=1;
        }

        else {

            cout<<a[e]<<" ";
            e-=1;
        }

        count+=1;
    }

  cout<<endl;
  }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}