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
        string s;
        cin>>s;
        ll left = 0, right = n - 1;
        bool f=true;
        ll ans = INT_MAX;
        while (left < right)
        {
            if (s[left] == s[right])
            {
                left++;
                right--;
            }
            else
            {
                f=false;
                char c = s[left], d = s[right];
                ll cnt = 0;
                ll l = left, r = right;
                while (l < r)
                {
                    if (s[l] == s[r])
                    {
                        l++;
                        r--;
                    }
                    else
                    {
                        if (s[l] == c)
                        {
                            l++;
                            cnt++;
                        }
                        else if (s[r] == c)
                        {
                            r--;
                            cnt++;
                        }
                        else
                        {
                            cnt = INT_MAX;
                            break;
                        }
                    }
                }
                ans = min(ans, cnt);
                cnt = 0;
                l = left, r = right;
                while (l < r)
                {
                    if (s[l] == s[r])
                    {
                        l++;
                        r--;
                    }
                    else
                    {
                        if (s[l] == d)
                        {
                            l++;
                            cnt++;
                        }
                        else if (s[r] == d)
                        {
                            r--;
                            cnt++;
                        }
                        else
                        {
                            cnt = INT_MAX;
                            break;
                        }
                    }
                }
                ans = min(ans, cnt);
                break;
            }
        }
        if(f)
        cout<<0<<endl;
        else
        cout << (ans == INT_MAX ? -1 : ans) << endl;
    }

    return 0;
}