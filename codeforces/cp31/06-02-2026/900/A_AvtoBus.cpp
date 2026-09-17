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
        ll n;
        cin >> n;
        if (n % 2 == 1 || n < 4)
        {
            cout << -1 << endl;
        }
        else
        {
            if (n % 6 == 0)
            {
                if (n % 4 == 0)
                {
                    cout << n / 6 << " " << n / 4 << endl;
                }
                else
                {
                    cout << n / 6 << " " << n / 4 << endl;
                }
            }
            else
            {
                if (n % 4 == 0)
                {
                    cout << n / 6 + 1 << " " << n / 4 << endl;
                }
                else
                {
                    cout << n / 6 + 1 << " " << n / 4 << endl;
                }
            }
        }
    }

    return 0;
}
