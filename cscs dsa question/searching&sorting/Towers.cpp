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
        vll temp(n);

        for (ll i = 0; i < n; i++)
            cin >> temp[i];
        vll remp;
        remp.push_back(temp[0]);


        for (ll i = 1; i < n; i++)
        {
            ll ma = remp[remp.size() - 1];
            if (temp[i] >= ma)
            {
                remp.push_back(temp[i]);
            }
            else
            {
                ll left = 0, right = remp.size() - 1;
                while(left<=right)
                {
                    ll mid=left+(right-left)/2;
                    if(remp[mid]>temp[i])
                    {
                        right=mid-1;
                    }
                    else
                    {
                        left=mid+1;
                    }
                }
                remp[left]=temp[i];
            }
        }
        cout << remp.size() << endl;
    }

    return 0;
}