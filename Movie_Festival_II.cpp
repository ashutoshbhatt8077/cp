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
        ll n, k;
        cin >> n >> k;
        vector<pair<int, int>> temp;
        for (int i = 0; i < n; i++)
        {
            ll in, ou;
            cin >> in >> ou;
            temp.push_back({in, 1});
            temp.push_back({ou, -1});
        }
        sort(temp.begin(), temp.end());
        vll ans;
        ll cnt = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            cnt += temp[i].second;
            if (cnt > 0 && cnt <= k)
            {
                if (ans.size() > 0)
                {
                    if (ans[ans.size() - 1] == cnt)
                    {
                    }
                    else
                    {

                        ans.push_back(cnt);
                    }
                }
                else
                {
                    ans.push_back(cnt);
                }
            }
        }
        ll p = 0;
        for (int i = 1; i < ans.size() - 1; i++)
        {
            if (ans[i] > ans[i - 1] && ans[i] > ans[i + 1])
            {
                p += ans[i];
            }
        }
        if (ans.size() > 2)
        {
            if (ans[ans.size() - 1] > ans[ans.size() - 2])
                p += ans[ans.size() - 1];
        }

        cout << p << endl;
    }

    return 0;
}