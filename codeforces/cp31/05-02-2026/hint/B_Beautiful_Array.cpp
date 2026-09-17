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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        if (s >= k * b && s <= k * b + n * (k - 1))
        {
            s -= (b * k);
            if (s >= (k - 1))
                {
                    cout << b*k+k - 1 << " ";
                    s-=(k-1);
                }
                else if(s>0)
                {
                    cout<<b*k+s<<" ";
                    s=0;
                }
                else 
                {
                    cout<<b*k<<" ";
                }
            for (int i = 1; i < n; i++)
            {
                if (s >= (k - 1))
                {
                    cout << k - 1 << " ";
                    s-=(k-1);
                }
                else if(s>0)
                {
                    cout<<s<<" ";
                    s=0;
                }
                else 
                {
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}