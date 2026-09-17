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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n), k(q);
        for (auto &it : a)
            cin >> it;
        for (auto &it : k)
            cin >> it;
        vector<ll> hei, till;
        till.push_back(0);
        hei.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            if (a[i] > hei[hei.size() - 1])
                hei.push_back(a[i]);
        }
        //for(auto it:hei)cout<<it<<" ";
        int j = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= hei[j])
            {
                sum += a[i];
            }
            else
            {
                till.push_back(sum+till[till.size()-1]);
                j++;
                sum = a[i];
            }
        }
        till.push_back(sum+till[till.size()-1]);
        //for(auto it:till)cout<<it<<" ";
        for(int i=0;i<q;i++)
        {
            ll num=k[i];
            int left=0,right=hei.size()-1;
            while(left<=right)
            {
                int mid=left+(right-left)/2;
                if(hei[mid]>num)
                right=mid-1;
                else
                left=mid+1;
            }
            cout<<till[left]<<" ";
        }

        cout << endl;
    }

    return 0;
}