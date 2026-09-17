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
        f(i, 0, n)
        {
            cin >> temp[i];
            if (temp[i] > 0)
            {
                temp[i] = 1;
            }
        }
        ll cnt=0;
        bool f=false;
        for(ll i=0;i<n;i++)
        {
            if(temp[i]==1)
            {
                if(!f)
                {
                    cnt++;
                    f=true;
                }
            }
            else
            {
                f=false;
            }
        }
        if(cnt==0)
        cout<<0<<endl;
        else if(cnt==1)
        cout<<1<<endl;
        else
        cout<<2<<endl;
        
    }

    return 0;
}