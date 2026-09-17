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
        ll n, l;
        cin >> n;
        char siu;
        map<char, ll> vis;
        vector<string> temp(n);
        priority_queue<string, vector<string>, greater<string>> pq;
        for (int i = 0; i < n; i++)
        {
            cin >> l;
            for (int j = 0; j < l; j++)
            {
                cin >> siu;
                temp[i] = siu + temp[i];
            }
        }
        string ans = "";
        for (auto it : temp)
            pq.push(it);
        while (!pq.empty())
        {
            string s = pq.top();
            pq.pop();
            if (vis.find(s[0]) == vis.end())
            {
                for (auto it : s)
                {
                    if (vis.find(it) == vis.end())
                    {
                        ans += it;
                        vis[it] = 1;
                    }
                }
            }
            else
            {
                while (!s.empty() && vis.count(s[0]))
                {
                    s.erase(s.begin());
                }
                if (s.size() > 0)
                {
                    pq.push(s);
                }
            }
        }
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}