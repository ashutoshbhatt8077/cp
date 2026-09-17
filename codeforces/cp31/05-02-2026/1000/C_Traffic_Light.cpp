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
        int n;
        char c;
        cin >> n >> c;
        string t;
        cin >> t;
        t += t;
        bool f = true;
        if (c == 'g')
            cout << 0 << endl;
        else
        {
            ll cnt=1,ans=0;
            for (int i = 0; i < 2 * n; i++)
            {
                if (f && t[i] == c)
                {
                    f = false;
                }
                else if (t[i] == 'g')
                {
                    ans=max(ans,cnt);
                    cnt=1;
                    f=true;
                }
                else 
                {
                    if(!f)
                    cnt++;
                }
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}