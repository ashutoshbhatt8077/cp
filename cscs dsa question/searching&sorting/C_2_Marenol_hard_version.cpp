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
        string a, b;
        cin >> a >> b;
        int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                if (i % 2 == 1)
                    a1++;
                else
                    a2++;
            }
            if (b[i] == '1')
            {
                if (i % 2 == 1)
                    b1++;
                else
                    b2++;
            }
        }

        if (a1 == b1 && a2 == b2)
        {
            string odda, evena, oddb, evenb;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    evena += a[i];
                    evenb += b[i];
                }
                else
                {
                    odda += a[i];
                    oddb += b[i];
                }
            }
            int cnt = 0;
            // for odd
            int j = 0;
             for (int i = 0; j < oddb.size() && i < odda.size(); i++)
            {
                if (odda[i] != oddb[j])
                {
                    while (j < oddb.size() && oddb[j] != odda[i])
                    {
                        j++;
                    }
                    cnt++;
                }
            }
            j = 0;
            // for even
             for (int i = 0; j < evenb.size() && i < evena.size(); i++)
            {
                if (evena[i] != evenb[j])
                {
                    while (j < evenb.size() && evenb[j] != evena[i])
                    {
                        j++;
                    }
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}