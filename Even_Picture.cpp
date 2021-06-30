// CTRL+ALT+M
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define int long long int
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vpi vector<pair<int, int>>
#define pii pair<int, int>
#define pb push_back
#define inf 1e18
#define ff first
#define ss second
#define deb(x) cout << #x << " " << x << endl;
#define all(x) x.begin(), x.end()
#define endl "\n"
const int maxn = 1e5;
//*! look for binary search see if dp can fit or dp with bs
//*? Set or Priority_queue
//*! Number is upto 10^5 check if a[maxn] gives something
//*? Graph Question depedencies Topo sort
//todo For a Tree its shortest Path in  dfs is same as in bfs if it is acyclic
// *! Bridge Detection:: From Backedge we take low[u]=min(low[u],tin[x])
// *! Bridge Detection:: From Child we take low[u]=min(low[u],low[x])
// *! Bridge Detection:: this is a bridge if(low[x]>tin[u])
void runcases(int T)
{

  int n;
  cin >> n;
  // cout << 9 * (n - 1) + 7 << endl;
   int a[n+2][n+2];
   
   memset(a,0,sizeof(a));
   for(int i=0;i<n+2;i++)
   {
     a[i][i]=1;
   }
  
   for(int i=0;i<n+2;i++)
   {
    
       if(i-1>=0){
           a[i][i-1]=1;   
       }
       if(i+1<(n+2))
       {
         a[i][i+1]=1;
       }
   }
   vpi res;
   for(int i=0;i<n+2;i++)
   {
      for(int j=0;j<(n+2);j++)
      {
        if(a[i][j])
        {
          res.pb({i,j});
        }
      }
   }
   int l=res.size();
   cout<<l<<endl;
   for(auto x:res)
   {
     cout<<x.ff<<" "<<x.ss<<endl;
   }
  //  cout<<"::::::\n";
  //  for(int i=0;i<n+2;i++)
  //  {
  //     for(int j=0;j<(n+2);j++)
  //     {
  //       cout<<a[i][j];
  //     }cout<<endl;
  //  }
  

  //cout<<"Case #"<<T<<": ";
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T = 1;
  //cin >> T;
  for (int t = 1; t <= T; t++)
  {
    runcases(t);
  }

  return 0;
}
