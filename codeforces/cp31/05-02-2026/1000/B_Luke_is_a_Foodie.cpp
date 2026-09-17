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
        int n, x;
        cin >> n >> x;
        ll cnt = 0;
        vll temp(n);
        for (auto &it : temp)
            cin >> it;
        vll lo(n), hi(n);
        for (int i = 0; i < n; i++)
        {
            lo[i] = temp[i] - x;
            hi[i] = temp[i] + x;
        }
        ll up = hi[0], lw = lo[0];
        for (int i = 1; i < n; i++)
        {
            if(up>=lo[i]&&hi[i]>=lw)
            {
                up=min(up,hi[i]);
                lw=max(lw,lo[i]);
            }
            else
            {
                cnt++;
                up=hi[i];
                lw=lo[i];
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}