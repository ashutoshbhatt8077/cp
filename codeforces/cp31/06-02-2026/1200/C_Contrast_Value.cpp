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
        vll temp(n), remp, b;
        for (auto &it : temp)
            cin >> it;
        remp.push_back(temp[0]);
        for (int i = 1; i < n; i++)
            if (temp[i] != temp[i - 1])
            {
                remp.push_back(temp[i]);
            }
        bool f;
        if (remp.size() == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            if (remp[1] > remp[0])
            {
                f = true;
            }
            else
            {
                f = false;
            }
            b.push_back(remp[0]);
            for (int i = 1; i < remp.size(); i++)
            {
                if (remp[i] > remp[i - 1])
                {
                    if (!f)
                    {
                        b.push_back(remp[i - 1]);
                        f = true;
                    }
                }
                else
                {
                    if (f)
                    {
                        b.push_back(remp[i - 1]);
                        f = false;
                    }
                }
            }
            cout << b.size() + 1 << endl;
        }
    }

    return 0;
}