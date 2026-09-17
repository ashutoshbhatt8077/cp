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
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> temp(n, vector<ll>(m));
        ll cnt=0;
        ll ans=0;
        ll mi=INT_MAX;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                {
                    cin >> temp[i][j];
                    ans+=abs(temp[i][j]);
                    if(temp[i][j]<0)
                    cnt++;
                    mi=min(abs(temp[i][j]),mi);
                }
        if(cnt%2==0)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans-mi-mi<<endl;
        }
    }

    return 0;
}