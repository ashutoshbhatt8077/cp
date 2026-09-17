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
        ll n, x;
        cin >> n;
        map<ll, queue<int>> ma;
        vector<ll> temp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            temp[i]=x;
            ma[x].push(i);
        }
        bool f = false;
        for (auto &it : ma)
        {
            if (it.second.size() == 1ll)
            {
                f = true;
                break;
            }
            else
            {
                int in=it.second.front();
                it.second.pop();
                it.second.push(in);
            }
        }
        if (f)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                int in=ma[temp[i]].front();
                ma[temp[i]].pop();
                cout<<in+1<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}