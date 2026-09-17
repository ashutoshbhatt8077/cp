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
        vector<ll> temp(n), remp(n);
        for (auto &it : temp)
            cin >> it;
        remp = temp;
        sort(remp.begin(), remp.end());
        bool f = false;
        if (remp == temp)
        {
            cout << "Bob" << endl;
        }
        else
        {
            ll mi = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                ll j=2;
                while(j*j<=temp[i])
                {
                    if(temp[i]%j==0)
                    {
                        break;
                    }
                    else
                    {
                        j++;
                    }
                }
                if(j*j>temp[i])
                {
                    if(mi<=temp[i])
                    {
                        mi=temp[i];
                    }
                    else
                    {
                        f=true;
                    }
                }
                else
                {
                    while(temp[i]%j==0)
                    {
                        temp[i]/=j;
                    }
                    if(temp[i]==1)
                    {
                        if(mi<=j)
                        {
                            mi=j;
                        }
                        else
                        {
                            f=true;
                        }
                    }
                    else
                    {
                        f=true;
                    }
                }
            }
            if (f)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }
    }

    return 0;
}