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
        ll n, k;
        cin >> n >> k;
        vector<vector<ll>> temp(n, vector<ll>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> temp[i][j];
        ll cnt = 0;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (temp[i][j] != temp[n - 1 - i][n-1-j])
                {
                    cnt++;
                }
            }
        }
        if(n%2==1)
        {
            for(int i=0;i<n/2;i++)
            {
                if(temp[n/2][i]!=temp[n/2][n-1-i])
                cnt++;
            }
            if (cnt <= k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }   
        else
        {
            if(cnt<=k&&(k-cnt)%2==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }

    return 0;
}