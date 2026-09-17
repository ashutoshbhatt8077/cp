#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> b(n), a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<pair<ll, int>> c;

        for (int i = 0; i < n; i++)
        {
            c.push_back({b[i], i});
        }

        sort(c.begin(), c.end());

        vector<ll> d;
        vector<ll> cnt;
        vector<vector<int>> temp;

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || c[i].first != c[i - 1].first)
            {
                d.push_back(c[i].first);
                cnt.push_back(0);
                temp.push_back({});
            }

            cnt.back()++;
            temp.back().push_back(c[i].second);
        }

        bool f = true;

        if (d[0] != 0)
        {
            f = false;
        }

        int m = d.size();

        vector<ll> x(m);

        if (m == 1)
        {
            x[0] = 1;
        }
        else
        {
            for (int i = 0; i < m - 1; i++)
            {
                ll dif = d[i + 1] - d[i];

                if (dif <= 0 || dif % cnt[i] != 0)
                {
                    f = false;
                    break;
                }

                x[i] = dif / cnt[i];

                if (i > 0 && x[i] <= x[i - 1])
                {
                    f = false;
                    break;
                }

                if (x[i] <= 0)
                {
                    f = false;
                    break;
                }
            }

            x[m - 1] = x[m - 2] + 1;
        }

        if (!f)
        {
            cout << -1 << '\n';
            continue;
        }

        for (int i = 0; i < m; i++)
        {
            for (int j : temp[i])
            {
                a[j] = x[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }

        cout << '\n';
    }

    return 0;
}