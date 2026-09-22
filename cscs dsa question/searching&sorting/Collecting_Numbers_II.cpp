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
        vector<ll> val(n);
        vector<ll> pos(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> val[i];
            val[i]--;
            pos[val[i]] = i;
        }
        ll cnt = 1;
       // cout<<pos[0]<<" ";
        for (long long i = 1; i < n; i++)
        {
         //   cout<<pos[i]<<" ";
            if (pos[i] < pos[i - 1])
            {
                cnt++;
            }
        }
        //cout<<endl;
        for (long long i = 0; i < m; i++)
        {
            ll a, b;
            cin >> a >> b;
            a--;
            b--;
            
            if (val[a] > 0 && pos[val[a]] < pos[val[a] - 1])
            {
                cnt--;
            }
            if (val[b] > 0 && pos[val[b]] < pos[val[b] - 1])
            {
                cnt--;
            }
            if (val[a] < n - 1 && pos[val[a]] > pos[val[a] + 1])
            {
                cnt--;
            }
            if (val[b] < n - 1 && pos[val[b]] > pos[val[b] + 1])
            {
                cnt--;
            }
            if(abs(val[a]-val[b])==1)
            {
                if(val[a]>val[b]&&pos[val[a]]<pos[val[b]])
                {
                    cnt++;
                }
                else if(val[b]>val[a]&&pos[val[b]]<pos[val[a]])
                {
                    cnt++;
                }
            }
            swap(pos[val[a]], pos[val[b]]);
            swap(val[a], val[b]);
            if (val[a] > 0 && pos[val[a]] < pos[val[a] - 1])
            {
                cnt++;
            }
            if (val[b] > 0 && pos[val[b]] < pos[val[b] - 1])
            {
                cnt++;
            }
            if (val[a] < n - 1 && pos[val[a]] > pos[val[a] + 1])
            {
                cnt++;
            }
            if (val[b] < n - 1 && pos[val[b]] > pos[val[b] + 1])
            {
                cnt++;
            }
            if(abs(val[a]-val[b])==1)
            {
                if(val[a]>val[b]&&pos[val[a]]<pos[val[b]])
                {
                    cnt--;
                }
                else if(val[b]>val[a]&&pos[val[b]]<pos[val[a]])
                {
                    cnt--;
                }
            }
            cout << cnt << endl;
        }
    }

    return 0;
}