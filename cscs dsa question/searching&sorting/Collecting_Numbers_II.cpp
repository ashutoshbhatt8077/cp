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
    int t = 1;
    // cin>>t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<pair<ll, ll>> temp(n);
        for (ll i = 0; i < temp.size(); i++)
        {
            cin >> temp[i].first;
            temp[i].second = i;
        }
        sort(temp.begin(), temp.end());
        ll cnt = 1;
        for (ll i = 1; i < temp.size(); i++)
        {
            if (temp[i].second < temp[i - 1].second)
            {
                cnt++;
            }
        }
        map<ll, ll> ma;
        for (ll i = 0; i < temp.size(); i++)
        {
            ma[temp[i].second] = i;
        }
        while (m--)
        {
            ll a, b;
            cin >> a >> b; //*
            a--;
            b--;
            ll la = ma[a], lb = ma[b]; // m
            ma[a] = lb;
            ma[b] = la;
            if (la > 0 && temp[la].second < temp[la - 1].second)
            {
                cnt--;
            }
            if (lb > 0 && temp[lb].second < temp[lb - 1].second)
            {
                cnt--;
            }
            if (abs(la - lb) != 1)
            {
                if (la + 1 < n && temp[la].second > temp[la + 1].second)
                {
                    cnt--;
                }
                if (lb + 1 < n && temp[lb].second > temp[lb + 1].second)
                {
                    cnt--;
                }
            }
            swap(temp[la], temp[lb]);
            if (abs(la - lb) != 1)
            {
                if (la + 1 < n && temp[la].second > temp[la + 1].second)
                {
                    cnt++;
                }
                if (lb + 1 < n && temp[lb].second > temp[lb + 1].second)
                {
                    cnt++;
                }
            }
            if (la > 0 && temp[la].second < temp[la - 1].second)
            {
                cnt++;
            }
            if (lb > 0 && temp[lb].second < temp[lb - 1].second)
            {
                cnt++;
            }

            cout << cnt << endl;
        }
    }

    return 0;
}