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

    int n;
    cin >> n;
    vi v(n);
    // int min=2;
    // int max=n;
    // int l=n/2;
    // v(n);
    // bool f=false;
    int l = 0, r = n - 1;
    int min = 1, max = n - 1;
    int sum = n - 1;
    bool f = false;
    while (l <= r)
    {
        if (l == r)
        {
            v[l] = n / 2;
            l++;
            r--;
        }
        else
        {
            if (!f)
            {
                v[l] = min;
                v[r] = sum - min;
                min += 2;
                l++;
                r--;
            }
            else
            {
                v[l] = max;
                v[r] = sum - max;
                max -= 2;
                l++;
                r--;
            }
        }
        f = !f;
    }
    // for(int x:v)
    // {
    //   cout<<x<<" ";
    // }
    vi res(n);
    for (int i = 0; i < n; i++)
    {
        res[v[i]] = (n - i) - 1;
    }
    if (res == v)
    {
        for (int x : v)
        {
            cout << x + 1 << " ";
        }
    }
    else
    {
        cout << -1 << endl;
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