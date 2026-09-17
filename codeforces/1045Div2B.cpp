#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr)

// Type Aliases
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

// Macros
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (a); i >= (b); --i)

// Constants
const int MOD = 1e9 + 7;
const ll INF = 1e18;
const int INF_INT = 1e9 + 10;

int gcd(int a,int b)
{
    if(b==1)
    return a;
    if(a<b)
    return gcd(b,a);
    return gcd(b,a%b);
}
// Solve function
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> temp(n);
    for (auto &it : temp)
        cin >> it;
    if (k % 2 == 1)
        for (int i = 0; i < n; i++)
        {
            if (temp[i] % 2 == 1)
            {
                temp[i] += k;
            }
        }
    else
    { 
        for(int a=3;;a+=2)
        {
            if(gcd(a,k)!=1)
            {
                continue;
            }
            else
            {
                for(int i=0;i<n;i++)
                {
                    while(temp[i]%a!=0)
                    temp[i]+=k;
                }
                break;
            }
        }
    }
    for (auto it : temp)
        cout << it << " ";
    cout << endl;
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
