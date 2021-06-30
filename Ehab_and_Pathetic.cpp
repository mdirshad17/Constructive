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
vi adj[maxn + 2ll];
void runcases(int T)
{

    int n;
    cin >> n;
    int indeg[n + 1];
    memset(indeg, 0, sizeof(indeg));

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vpi vp;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
        vp.pb({x, y});
        indeg[x]++;
        indeg[y]++;
    }
    for (int i = 1; i <= n; i++)
    {
        pq.push({indeg[i], i});
    }
    int s = 0;
    map<pii, int> st;
    while (!pq.empty())
    {
        pii tp = pq.top();
        pq.pop();
        for (auto x : adj[tp.second])
        {
            if (st.count({x, tp.second}))
            {
                continue;
            }
            else
            {
                st[{tp.second, x}] = s;
                st[{x, tp.second}] = s;
                s++;
            }
        }
    }
    for (auto x : vp)
    {
        cout << st[{x.ff, x.ss}] << endl;
    }
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
