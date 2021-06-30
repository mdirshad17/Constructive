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
// vi adj[maxn]
// int visited[maxn]
void runcases(int T)
{

    int n, m;
    cin >> n >> m;
    map<int, multiset<int>> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            mp[(i + j)].insert(x);
        }
    }
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            if (mp[(i + j)].count(x))
            {
                mp[(i + j)].erase(mp[(i + j)].find(x));
            }
            else
            {
                // cout<<x<<" ";
                // cout << "NO\n";
                ans = false;
                // return;
            }
        }
    }
    if (!ans)
    {
        cout << "NO\n";
        return;
    }
    for (auto x : mp)
    {
        if ((int)x.second.size())
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

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
