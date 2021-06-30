// ctrl+alt+m
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
void runcases(int T)
{

    int n, m, k;
    cin >> n >> m >> k;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    priority_queue<pii> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push({v[i], i + 1});
    }
    int sum = 0;
    vi index;
    int x = m * k;
    while (!pq.empty() && x)
    {
        x--;
        pii tp = pq.top();
        pq.pop();
        sum += tp.ff;
        index.push_back(tp.ss);
    }
    sort(all(index));
    cout << sum << endl;
    for (int i = 0; i < index.size() - 1; i++)
    {
        if (((i + 1) % m) == 0)
        {
            cout << index[i] << " ";
        }
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
