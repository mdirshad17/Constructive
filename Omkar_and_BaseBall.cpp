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
  int cntx = 0;
  // bool f=
  int s = -1;
  bool f = false;
  int cnt = 0;
  int l=0,r=n-1;
  while(l<n && v[l]==(l+1))
  {
    cntx++;
    l++;
  }
  while(r>=l && v[r]==(r+1))
  {
    r--;
    cntx++;
  }
  for(int i=l;i<=r;i++)
  {
    if(v[i]!=i+1)
    {
      cnt++;
    }
  }
  // deb(l);
  // deb(r);
  int nl = n - cntx;
  // deb(nl);
  if (cnt == 0)
  {
    cout << 0 << endl;
  }
  else if (cnt < nl)
  {
    cout << 2 << endl;
  }
  else
    cout << 1 << endl;

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
