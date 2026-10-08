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
        ll n;
        cin >> n;
        int i = 0;
        vector<int> ans(n, -1);
        vector<tuple<int, int, int>> temp(n);
        for (auto &[arr, dep, in] : temp)
        {
            cin >> arr >> dep;
            in = i++;
        }
        sort(temp.begin(), temp.end());
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // dep,roomid
        int room = 0;
        for (i = 0; i < n; i++)
        {
            auto [arr, dep, in] = temp[i];
            int roomid;
            if (!pq.empty() && pq.top().first < arr)
            {
                roomid = pq.top().second;
                pq.pop();
            }
            else
            {
                roomid = ++room;
            }
            pq.push({dep, roomid});
            ans[in]=roomid;
        }
        cout << room << endl;
        for (i = 0; i <n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}