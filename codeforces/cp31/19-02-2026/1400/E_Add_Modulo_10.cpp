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
        vll temp(n);
        for (auto &it : temp)
        {
            cin >> it;
            if (it % 2 == 1)
            {
                it += (it % 10);
            }
        }
        // for (auto &it : temp)
        // {
        //     cout << it << " ";
        // }
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            if (temp[i] % 10 == 0)
                s.insert(temp[i]);
            temp[i] = temp[i] % 20;
        }
        sort(temp.begin(), temp.end());
        if (s.size() > 1)
        {
            cout << "No" << endl;
        }
        else if (temp[0] == temp[n - 1])
        {
            cout << "Yes" << endl;
        }
        else
        {
            for (auto &it : temp)
            {
                if (it !=(it%10+it))
                    while ((it + it % 10) < 20)
                    {
                        it += (it % 10);
                    }
            }
            sort(temp.begin(), temp.end());
            if (temp[0] == temp[n - 1])
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}