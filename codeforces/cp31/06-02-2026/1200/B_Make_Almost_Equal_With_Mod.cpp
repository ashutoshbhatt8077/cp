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
        vll temp(n);
        for (auto &it : temp)
            cin >> it;
        int i;
        for (i = 0; i < 64; i++)
        {
            bool f=true;
            int bi=(temp[0]>>i)&1;
            for (int j = 1; j < n; j++)
            {
               if(bi!=((temp[j]>>i)&1))
               {
                f=false;
                break;
               }
            }
           if(!f)
           break;
        }
        cout << (1ll << (i+1)) << endl;
    }

    return 0;
}