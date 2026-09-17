#include <bits/stdc++.h>
using namespace std;

#define f(i, s, e) for (long long i = s; i < e; i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define ub(hei, num) upper_bound(hei.begin(), hei.end(), num) - hei.begin()
#define lb(hei, num) lower_bound(hei.begin(), hei.end(), num) - hei.begin()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, n;
        cin >> x >> n;
        if(n%4==0)
        {
            cout<<x<<endl;
        }
        else if(n%4==1)
        {
            if(x%2==0)
            {
                cout<<x-n<<endl;
            }
            else
            {
                cout<<x+n<<endl;
            }
        }
        else if(n%4==2)
        {
            if(x%2==0)
            cout<<x+1<<endl;
            else
            cout<<x-1<<endl;
        }
        else
        {
            if(x%2==0)
            {
                cout<<x+n+1<<endl;
            }
            else
            {
                cout<<x-n-1<<endl;
            }
        }
    }

    return 0;
}