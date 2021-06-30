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
// vi adj[maxn];
// int visited[maxn];
bool good(int r, string s)
{
    int l = 0;
    while (l <= r)
    {
        if (s[l] > s[r])
        {
            return true;
        }
        else if (s[r] > s[l])
        {
            return false;
        }
        l++;
        r--;
    }
    return false;
}
void reversex(string &s, int r)
{

    int l = 0;
    while (l <= r)
    {
        swap(s[l++], s[r--]);
    }
}
void runcases(int T)
{

    string s;
    cin >> s;
    int n = s.size();
    // cout << 0 << " ";
    vector<int> v(n, 0);
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            int cnt = -1;
            int j = i;
            while (i + 1 < n && s[i + 1] == 'a')
            {
                cnt++;
                i++;
            }
            if (prev)
            {
                v[j - 1] = 1;
            }
            prev = 1;
            v[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        // if(v[i])
        // {
        //     reversex(s,i);
        // }
        cout << v[i] << " ";
    }
    // cout<<endl;
    // cout<<"Case #"<<T<<": ";
    // cout<<s<<endl;
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
