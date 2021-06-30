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

    int n, k;
    cin >> n >> k;
    vi v(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        v[i] = (i + 1);
    }
    int cnt = k;
    for (int i = 0; i < 2 * n && k; i += 2)
    {
        swap(v[i], v[i + 1]);
        k--;
    }
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < 2 * n; i += 2)
    {
        sum1 += abs(v[i] - v[i + 1]);
        sum2 += (v[i] - v[i + 1]);
    }
    // cout<<sum1<<" "<<sum2<<endl;
    sum2 = abs(sum2);
    assert(sum2 + 2 * cnt == sum1);
    for (int x : v)
    {
        cout << x << " ";
    }

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
