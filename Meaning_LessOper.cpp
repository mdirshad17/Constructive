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
    int l = n + 1;
    bool f = l & (l - 1);
    if (f)
    {
        int s = 1;
        while (s < l)
        {
            s = s * 2;
        }
        cout << (s - 1) << endl;
    }
    else
    {
        int maxans = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if ((n % i) == 0)
            {

                int d = n / i;
                int e = i;
                maxans = max({maxans, d, e});
            }
        }
        cout << maxans << endl;
    }

    //cout<<"Case #"<<T<<": ";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        runcases(t);
    }

    return 0;
}
