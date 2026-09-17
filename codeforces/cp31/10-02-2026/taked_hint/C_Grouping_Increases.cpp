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
        ll n;
        cin >> n;
        vector<ll> temp(n);
        for (auto &it : temp)
            cin >> it;
        vector<ll> a, b;
        
        a.push_back(INT_MAX);
        b.push_back(INT_MAX);
        for(int i=0;i<n;i++)
        {
            if(a[a.size()-1]<=b[b.size()-1])
            {
                if(temp[i]>a[a.size()-1]&&temp[i]<=b[b.size()-1])
                {
                    b.push_back(temp[i]);
                }
                else
                {
                    a.push_back(temp[i]);
                }
            }
            else
            {
                if(temp[i]<=a[a.size()-1]&&temp[i]>b[b.size()-1])
                {
                    a.push_back(temp[i]);
                }
                else
                {
                    b.push_back(temp[i]);
                }
            }
        }

        ll cnt = 0;
        for (ll q = 1; q < 1ll*a.size(); q++)
            if (a[q] > a[q - 1])
                cnt++;
        for (ll q = 1; q < 1ll*b.size(); q++)
            if (b[q] > b[q - 1])
                cnt++;
        cout << cnt << endl;
    }

    return 0;
}