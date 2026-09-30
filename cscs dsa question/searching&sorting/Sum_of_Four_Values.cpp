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
        ll n, s;
        cin >> n >> s;
        vector<pair<int, int>> temp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temp[i].first;
            temp[i].second = i + 1;
        }
        sort(temp.begin(), temp.end());
        for (int a = 0; a < n; a++)
            for (int i = a + 1; i < n; i++)
            {
                int j = i + 1, k = n - 1;
                while (j < k)
                {
                    if (temp[a].first + temp[i].first + temp[j].first + temp[k].first == s)
                    {
                        cout << temp[a].second << " " << temp[i].second << " " << temp[j].second << " " << temp[k].second << endl;
                        return 0;
                    }
                    else if (temp[a].first + temp[i].first + temp[j].first + temp[k].first > s)
                    {
                        k--;
                    }
                    else
                    {
                        j++;
                    }
                }
            }
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}