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

int gcd(int a, int b)
{
    if (b == 1)
        return a;
    if (a < b)
        return gcd(b, a);
    return gcd(b, a % b);
}
// Solve function
void solve()
{
    ll n;
    cin >> n;
    vector<int> temp(n);
    for (auto &it : temp)
        cin >> it;
    if(n==1)
    {
        cout<<temp[0]<<endl;
        return;
    }
    int me=temp[0],mao=temp[1],i=0,j=1;
    for(int a=0;a<n;a++)
    {
        if(a%2==0)
        {
            if(me>temp[a])
            {
                me=temp[a];
                i=a;
            }
        }
        else
        {
            if(mao<=temp[a])
            {
                mao=temp[a];
                j=a;
            }
        }
    }
    swap(temp[i],temp[j]);
    ll ans=0;
    for(int a=0;a<n;a++)
    {
        if(a%2==0)
        {
            ans+=temp[a];
        }
        else
        {
            ans-=temp[a];
        }
    }
    cout<<j-i+ans<<endl;
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
