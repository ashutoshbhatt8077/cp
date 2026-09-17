#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t > 0)
    {
        t--;
        ll n;
        cin >> n;
        vector<ll> temp(n);
        for (auto &it : temp)
            cin >> it;
        bool f = true;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (temp[i] == temp[j])
            {
                i++;
                j--;
            }
            else
            {
                bool t = true, u = true;
                ll a = temp[i], b = temp[j];
                ll p = 0, q = n - 1;
                while (p < q)
                {
                    if (temp[p] == a)
                        p++;
                    else if (temp[q] == a)
                        q--;
                    else if (temp[p] == temp[q])
                    {
                        p++;
                        q--;
                    }
                    else
                    {
                        t = false;
                        break;
                    }
                }
                p = 0, q = n - 1;
                while (p < q)
                {
                    if (temp[p] == b)
                        p++;
                    else if (temp[q] == b)
                        q--;
                    else if (temp[p] == temp[q])
                    {
                        p++;
                        q--;
                    }
                    else
                    {
                        u = false;
                        break;
                    }
                }
                f = u || t;
                break;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout<<"NO"<<endl;
    }
}