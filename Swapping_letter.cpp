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
  string x, y;
  cin >> x >> y;
  int a[2], b[2];
  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));
  for (char c : x)
  {
    a[c - 'a']++;
  }
  for (char c : y)
  {
    b[c - 'a']++;
  }
  a[0] += b[0];
  a[1] += b[1];
  if (a[0] & 1 || a[1] & 1)
  {
    cout << -1;
      return;
  }
  vector<int> vp1, vp2;
  for (int i = 0; i < n; i++)
  {
    if (x[i] == y[i])
    {
      continue;
    }
    else
    {
      if (x[i] == 'a')
      {
        vp1.pb(i+1);
      }
      else
        vp2.pb(i+1);
    }
  }
  int f = vp1.size();
  int g = vp2.size();
  // for(int )
// deb(f);
// deb(g);
  int c1 = f / 2;
  int c2 = g / 2;
  c1 += c2;
  int r1 = f % 2;
  int r2 = f % 2;
  int l = 0;
  if (r1)
  {
    c1 += 2;
    cout << c1 << endl;
    swap(x[vp2[g-1]-1],y[vp2[g-1]-1]);
    swap(x[vp1[f-1]-1],y[vp2[g-1]-1]);
    cout << vp2[g - 1] << " " << vp2[g - 1] << endl;
    cout << vp1[f - 1] << " " << vp2[g - 1] << endl;
    f = (f / 2) * 2;
    g = (g / 2) * 2;
    for (int i = 0; i < f; i += 2)
    {
      cout << vp1[i] << " " << vp1[i + 1] << endl;
      swap(x[vp1[i]-1],y[vp1[i+1]-1]);
    }
    for (int i = 0; i < g; i += 2)
    {
      cout << vp2[i] << " " << vp2[i + 1] << endl;
      swap(x[vp2[i]-1],y[vp2[i+1]-1]);
    }
  }
  else
  {
    cout << c1 << endl;

    for (int i = 0; i < f; i += 2)
    {
      cout << vp1[i] << " " << vp1[i + 1] << endl;
      swap(x[vp1[i]-1],y[vp1[i+1]-1]);
    }
    for (int i = 0; i < g; i += 2)
    {
      cout << vp2[i] << " " << vp2[i + 1] << endl;
      swap(x[vp2[i]-1],y[vp2[i+1]-1]);
    }
  }
  // cout<<x<<" "<<y<<endl;
   //   *! Just for making sure that my answer is correct
   //    *? if not correct it will through assertion failed so we  will get that we are getting WA
  assert(x==y);

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
