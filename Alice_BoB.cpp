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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    string s;
    cin >> s;
    vi psum1(n, 0), psum2(n, 0);
    // A         and      B
    vi ssum1(n, 0), ssum2(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            psum1[i] = v[i];
        }
        else
            psum2[i] = v[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'A')
        {
            ssum1[i] = v[i];
        }
        else
            ssum2[i] = v[i];
    }
    for (int i = 1; i < n; i++)
    {
        psum1[i] += psum1[i - 1];
        psum2[i] += psum2[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        ssum1[i] += ssum1[i + 1];
        ssum2[i] += ssum2[i + 1];
    }
    int maxans = 0;
    maxans = psum2[n - 1];
    maxans = max(maxans, psum1[n - 1]);
    maxans = max({maxans, ssum1[0], ssum2[0]});
    for (int i = 0; i < n; i++)
    {
        int lsum1 = psum1[i];
        int lsum2 = psum2[i];
        int rsum1 = (i + 1 < n ? ssum1[i + 1] : 0);
        int rsum2 = (i + 1 < n ? ssum2[i + 1] : 0);
        int s1 = lsum1 + rsum2;
        int s2 = lsum2 + rsum1;
        maxans = max({maxans, s1, s2});
    }
    cout << maxans << endl;

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
