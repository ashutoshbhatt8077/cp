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
        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> temp(n);
        for (auto &it : temp)
            cin >> it;
        vector<ll> a, b;
        for (int i = x; i < y; i++)
        {
            a.push_back(temp[i]);
        }
        for (int i = 0; i < x; i++)
        {
            b.push_back(temp[i]);
        }
        for (int i = y; i < n; i++)
        {
            b.push_back(temp[i]);
        }
        ll mia = INT_MAX, mib = INT_MAX;
        for (int i = 0; i < a.size(); i++)
        {
            mia = min(mia, a[i]);
        }
        for (int i = 0; i < b.size(); i++)
        {
            mib = min(mib, b[i]);
        }
        vector<ll> ansa(a.size()), ansb(b.size());
        for (int i = 0; i < a.size(); i++)
        {
            if (mia == a[i])
            {
                for (int j = 0; j < a.size(); j++)
                {
                    ansa[j] = a[(i + j) % a.size()];
                }
            }
        }
        for (int i = 0; i < b.size(); i++)
        {
            if (mib == b[i])
            {
                for (int j = 0; j < b.size(); j++)
                {
                    ansb[j] = b[(i + j) % b.size()];
                }
            }
        }
    int i=0,j=0;
       while(i<ansa.size()&&j<b.size()&&ansa[i]>b[j])
       {
        cout<<b[j]<<" ";
        j++;
       }
       while(i<ansa.size())
       {
           cout<<ansa[i]<<" ";
           i++;
       }
       while(j<b.size())
       {
        cout<<b[j]<<" ";
        j++;
       }

        cout << endl;
    }

    return 0;
}